import xml.etree.ElementTree
from itertools import groupby
import pickle
import gzip
import os


def cached():
    """
    A function that creates a decorator which will use "cachefile" for caching the results of the decorated function "fn".
    """
    def decorator(fn):  # define a decorator for a function "fn"
        cache_name = fn.func_name
        def wrapped(*args, **kwargs):   # define a wrapper that will finally call "fn" with all arguments
            if os.path.exists(cache_name):
                with gzip.GzipFile(cache_name, 'rb') as cachehandle:
                    return pickle.load(cachehandle)

            # execute the function with all arguments passed
            res = fn(*args, **kwargs)

            # write to cache file
            with gzip.GzipFile(cache_name, 'wb') as cachehandle:
                pickle.dump(res, cachehandle, pickle.HIGHEST_PROTOCOL)
            return res
        return wrapped
    return decorator   # return this "customized" decorator that uses "cachefile"


class CVE_Ref(object):
    def __init__(self, cve_ref):
        self.url = None
        self.source = None
        map(lambda x: setattr(self, x[0], x[1]), cve_ref.attrib.items())
        self.text = cve_ref.text
        if self.has_url():
            self.url = self.url.replace('http://', '').replace('https://', '').replace('ftp://', '').replace('www.', '')

    def has_url(self):
        return not self.url is None

    def is_confirm(self):
        return self.source == 'CONFIRM'

    def is_good(self):
        return self.is_confirm() and self.has_url()

    def __repr__(self):
        return self.url

class CVE_Record(object):
    def __init__(self, xml_element):
        map(lambda x: setattr(self, x[0], x[1]), xml_element.attrib.items())
        self.desc = filter(lambda x: x.tag.endswith('desc'), xml_element.getchildren())[0].text
        refs = filter(lambda x: x.tag.endswith('refs'), xml_element.getchildren())[0]
        self.refs = map(CVE_Ref, refs.getchildren())

    def __repr__(self):
        return self.name

@cached()
def read_cve_xml(cve_path):
    et = xml.etree.ElementTree.parse(cve_path)
    return map(CVE_Record, et.getroot().getchildren())

@cached()
def cve_xml_urls(cve_records):
    urls = map(lambda cve: map(lambda ref: (ref, cve), filter(CVE_Ref.is_good, cve.refs)), cve_records)
    return reduce(list.__add__, urls, [])

@cached()
def get_starts(urls):
    return sorted(map(lambda x: (x[0].url.split('/')[0], x), urls), key=lambda x: x[0])


if __name__ == "__main__":
    urls = cve_xml_urls(read_cve_xml(r"..\allitems.xml"))
    starts = get_starts(urls)
    grouped = groupby(starts, lambda x: x[0])
    groupd = sorted(map(lambda x: (x[0], len(list(x[1]))), grouped), key=lambda x: x[1], reverse=True)
    print groupd[:30]