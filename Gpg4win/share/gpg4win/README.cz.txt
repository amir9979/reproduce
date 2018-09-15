
                   English README file for Gpg4win
                   ===============================

This is Gpg4win, version 3.1.3 (2018-08-31).

Content:

     1. Important notes
     2. Changes
     3. Additional notes
     4. Version history
     5. Version numbers of included software
     6. Legal notices


1. Important notes
==================

At release date, the English version of the ebook `Gpg4win Compendium`
has not been updated for Gpg4win 3, but still is useful as documentation of
some general background how to use the product. You will find it
on your system (depending on the version of Windows) or online at

    https://www.gpg4win.org/doc/en/gpg4win-compendium.html

Note that the German version 4.0.0 is up-to-date and only available as pdf.

Please read the section `3. Additional notes` of this
README before you start working with Gpg4win.

The Compendium has more hints for manual or automated installation.


System requirements
-------------------

Gpg4win runs on Windows versions 7 or newer (up to Windows 10).
Both 32 and 64bit systems are supported. If you have at least Windows XP,
some parts of Gpg4win can be used, but are not officially supported.

The Outlook plugin GpgOL is compatible with Microsoft Outlook 2010,
2013 and 2016 (both 32 and 64bit) and supports transporting emails
via SMTP/IMAP and MS Exchange Server (version 2010 or newer).

With Gpg4win version 3.1.2 Outlook 2003 and 2007 support was removed for
security reasons.

(See https://www.gpg4win.org/system-requirements.html for updates.)


2. Changes
==========

Included Gpg4win components in version 3.1.3 are:

    GnuPG:          2.2.10
    Kleopatra:      3.1.3
    GPA:            0.9.10
    GpgOL:          2.3.0
    GpgEX:          1.0.6
    Kompendium DE:  4.0.1
    Compendium EN:  3.0.0


New in Gpg4win version 3.1.3 (2018-08-31)
-----------------------------------------

- GpgOL: It is now possible to move crypto mails while they
  are open. (T3459)

- GpgOL: Messages are automatically secured if certified Keys / certificates
  can be found for each recipient.
  This can be turned off with the option "Automatically secure messages".
  (T3999)

- GpgOL: Support for distribution lists has been added. (T4065)

- GpgOL: S/MIME can now be preferred when automatically resolving
  recipients. (T3961)

- GpgOL: Encryption should no longer cause Outlook to freeze.
  (T3838)

- GpgOL: Mails moved by Outlook folder rules are now handled by
  GpgOL. (T4070)

- GpgOL: The config dialog was changed to improve future extensibility.
  (T3961)

- GpgOL: Fixed various memory errors and stability problems.

- GpgOL: Verifying mails a second time is now much faster.

- GpgOL: Crashes related to filenames of attachments have been fixed.
  (T4062 T4032)

- GpgOL: An error has been fixed which could lead to attachments not
  beeing displayed.

- GpgOL: Sent on behalf of is now respected when verifying a signature.
  (T4110)

- Kleopatra: Now offers diagnostic information in case of file
  decryption errors.

- Kleopatra: Support for NetKey v3 Smartcards has been improved.
  (T4080)

- Kleopatra: Decryption errors caused by missing integrity protection
  (MDC) are now handled properly. (T4038)

- Kleopatra: Update check can now be disabled more easily. (T4043)

- Kleopatra: Special characters in GnuPG output should be displayed
  correctly. (T2983)

- Kleopatra: p7m and p7s files are now also registered to be
  opened with Kleopatra. (T3890)

- Kleopatra: Various minor improvements. (T3238 T4078 T3229 T4041)

- Installer: Silent install now correctly closes running Gpg4win
  applications. (T4051)

- Installer: New optional module "Browser Integration" to register
  GnuPG as backend for Mailvelope 3.0.

- GnuPG: The dirmngr process no longer requests Windows firewall
  access. (T3610)

- GnuPG: S/MIME data is now handled faster. (T4069)

- GnuPG: Updated to 2.2.10
  (See: https://lists.gnupg.org/pipermail/gnupg-announce/2018q3/000428.html )


3. Additional notes
===================

- GpgOL

  * Crypto mails forwarded as attachment are not properly handled.

  * Localization is only complete for Dutch, German and Portugese.

- General

  * For 3.2 we plan to, optionally, further automate GpgOL. This would
    set the GnuPG-Option:

        trust-model tofu+pgp

    As this is not properly handled everywhere (especially Kleopatra's
    file verification dialog) this is not default.

    You can add it manually to your gpg.conf. The trust-model is already
    supported by GpgOL.


4. Version history
==================

Listed below are the changes as recorded in the source distribution's
NEWS file. An up-to-date list of changes is also available at:
https://www.gpg4win.org/change-history.html



Noteworthy changes in Version 3.1.3 (2018-08-31)
------------------------------------------------

   * GpgOL: It is now possible to move crypto mails while they
     are open. (T3459)



5. Version numbers of included software
=======================================

=========== SHA-1 checksum ============= == package ==
3c31c9d6b19af840e2bd8ccbfef4072a6548dc4e atk-1.32.0.zip
d0b8c53e01e4541d3d3befc82e41fb5b84949030 atk-dev-1.32.0.zip
7f56ab507d3258610391b47fef6b11635861175a boost-1.60.0.tar.bz2
c873a69ccbe3b150ee1cbbbb0fca2302b132b75d breeze-icons-5.43.0.tar.xz
6e38be3377340a21a1f13ff84b5e6adce97cd1d4 bzip2-1.0.6-g10.tar.gz
d44cd66a9f4d7d29a8f2c28d1c1c5f9b0525ba44 cairo-1.10.2.zip
45cae1fac45a6c6f33498c37c0cdc47722614d92 cairo-dev-1.10.2.zip
f47790b9e324cd8613acc9a17fd56bf2c14745fc expat-2.0.1.zip
2e9189c6c6d1dac847a47c537c7a5e9dffd91992 expat-dev-2.0.1.zip
7968ac2bc0cd7830c48f17cfc731a8a22c0c2d4c extra-cmake-modules-5.43.0.tar.xz
37a3117ea6cc50c8a88fba9b6018f35a04fa71ce fontconfig-2.8.0.zip
0b772aaeb0a7a0d5de21afd901d6cf00753efa51 fontconfig-dev-2.8.0.zip
c20ab9ff053fe59f73612fd392f6e6dc01af614a freetype-2.4.2.zip
00e877d7ec7c416e2b48a392324a5502019a20bf freetype-dev-2.4.2.zip
6277b4e5b5e334b3669f15ae0376e184be9e8cd8 gdk-pixbuf-2.30.8.tar.xz
dc551d4783edf691c1f0095ca927d3128b5093e8 gettext-0.19.8.tar.xz
31de819181dd8abc25d89484ff6a4e60f032e8fc glib-2.41.5.tar.xz
682002bce9e45309179a09348df3b92a82bdc501 gnupg-w32-2.2.10-20180830-bin.exe
c629348725c1bf5dafd57f8a70187dc89815ce60 gpa-0.9.10.tar.bz2
999db2d8f9de5ddf472ab353b51ff368f9bb4ebc gpg4win-tools-201808281418.tar.gz
443270219d542f97b6f124d2101ae8d803c6dbe2 gpgex-1.0.6.tar.bz2
b99c81553ba5b60412914ad7a7e85a43c2f3152b gpgme-1.11.2-beta247.tar.bz2
8c1c8fc098b23c690b2f4ea2c82bffa38071c70d gpgol-2.3.0.tar.bz2
f3c2f1a3728ed51d08054f6b4c7384fbf99477c0 gtk+-2.24.28.tar.xz
dca30e214c0116891ccf9db75619e25490ef20ed karchive-5.43.0.tar.xz
84b42075cb7fb55dbf1e28c336a3e70ea41b5f5d kcodecs-5.43.0.tar.xz
832d8a077cd23b58f92b7ae02e6868a15890396f kcompletion-5.43.0.tar.xz
da5354335b342aa29b1b18c4ef6dda8a2a959b79 kconfig-5.43.0.tar.xz
a6abab070bb8e30c090a911b699d687c0b914e19 kconfigwidgets-5.43.0.tar.xz
c151a3c8373d1f09bf2d7353ca8c77407dfbc05f kcoreaddons-5.43.0.tar.xz
448e1852cbf34479b6e1741fd01e157e942973f2 kcrash-5.43.0.tar.xz
81255b40206aeed33b7f06212b53ab5de97af2bd kde-l10n-201808311346-bin.tar.xz
100f555d9f7bd90c33c5e2a4ea3167e601e8fd24 kguiaddons-5.43.0.tar.xz
938efcc084e44956a97527157c45b44d24af49c7 ki18n-5.43.0.tar.xz
ef600a692a41b4038014e945e45d32f0f03d3f96 kiconthemes-5.43.0.tar.xz
44aff2dff5565798ec57f10617fc37d19eb69b56 kitemmodels-5.43.0.tar.xz
514e0fb5125cf15a7b253cd039ff7b41af36682f kitemviews-5.43.0.tar.xz
cdd089c6f4a24cabfe07451c5760f4275ba10f88 kleopatra-201808311328.tar.gz
4951cd349add960f86ce3cae4c8e997eb8ae932a kmime-17.12.2.tar.xz
5571d14ae46d80389e543bcf5410d8e7a0590453 kwidgetsaddons-5.43.0.tar.xz
f3777841e3c5eaaf58957a88f77c255c1a0197cc kwindowsystem-5.43.0.tar.xz
1c23baf880039f5327dcfbace6e2e687bc0272bf kxmlgui-5.43.0.tar.xz
c8432695bf1daa914a92f51e911881ed93d50604 libassuan-2.5.1.tar.bz2
f5230890dc0be42fb5c58fbf793da253155de106 libffi-3.0.13.tar.gz
e310718c7737c816cb1313a2f3baf60fd6a6d5d3 libgpg-error-1.32.tar.bz2
7af3149fa7c4bd1d3a36a30f02e95a0ebfd6b18f libiconv-1.15.tar.gz
26fee020f962d9cf4791bbaedcfea3d8b8b0b133 libkleo-201808281419.tar.gz
382f820db7adac5e31605c5fa93ba98ff0e94049 libpng-1.4.22.tar.xz
3959319bd04fbce513458857f334ada279b8cdd4 pango-1.29.4.zip
49ae12458f2e29c27ed9d1390d95db18fd4a49ac pango-dev-1.29.4.zip
2d11d78f1c483bc07479a131bc2b04bac3c87282 paperkey-1.5.tar.gz
fa368eb5723b72d3edf72f072973dcb176ed8112 pinentry-1.1.1-beta5.tar.bz2
d063e705812e1ee7feb8f35d51b3cad04ca13b0d pkgconfig-0.23.zip
234275f97ca401ae3df5e0c3d937e68056957bbe qtbase-5.10.1.tar.xz
42ded84f005054c2d18f62bf3797ef17cc302906 qtsvg-5.10.1.tar.xz
1955af4a3f81c6305f997a8408380bdf51de83bd qttools-5.10.1.tar.xz
962b15475cb023e33eee7c2e3ccbb1b5939bae29 qttranslations-5.10.1.tar.xz
73cdfdaaf27d5b28faed0921d48a30b26b803ff0 qtwinextras-5.10.1.tar.xz
d648b98ce215f81e901f3f982470d37c704433a6 w32pth-2.0.5.tar.bz2
e6d119755acdf9104d7ba236b1242696940ed6dd zlib-1.2.11.tar.gz


6. Legal notices pertaining to the individual packets
=====================================================

Gpg4win consist of several independently developed packages, available
under different licensing conditions.  Most of these packages however
are available under or compatible to the GNU General Public License (GNU GPL).
Common to all is that they are Free Software, which means they can be used
without restrictions, may be studied, modified and that modifications may be
distributed. If the source files (i.e. gpg4win-src-x.y.z.exe) are distributed
along with the binaries and the use of the GNU GPL has been pointed out,
distribution is possible under many circumstances.

What follows is a list of copyright statements.

Here is a list with collected copyright notices.  For details see the
description of each individual package.  This is not meant as an
exhaustive list of copyright notices.  Notices from several packages
are even not listed.  The most restrictive requirements are those of
the GNU General Public License version 3 (GPLv3+); thus complying to
those terms and conditions should be sufficient.  If in doubt check
the individual packages.


Gpg4win (the installer) is

  Copyright (C) 2005, 2006, 2007, 2008, 2009, 2010, 2013 g10 Code GmbH

  Gpg4win is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  Gpg4win is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
  02110-1301, USA


GnuPG is

  Copyright 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
            2006, 2007, 2008, 2009, 2010, 2011, 2012,
            2013 Free Software Foundation, Inc.

  GnuPG is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.

  GnuPG is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
  License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, see <http://www.gnu.org/licenses/>.

  See the files AUTHORS and THANKS for credits, further legal
  information and bug reporting addresses pertaining to GnuPG.


NSIS is

  Copyright 1999-2009 Nullsoft, Jeff Doozan and Contributors
  Copyright 2002-2008 Amir Szekely
  Copyright 2003 Ramon
  Copyright 1995-1998 Jean-loup Gailly and Mark Adler
  Copyright 1999-2006 Igor Pavlov
  Copyright 1996-2000 Julian R Seward

  This license applies to everything in the NSIS package, except where
  otherwise noted.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any
  damages arising from the use of this software.

  Permission is granted to anyone to use this software for any
  purpose, including commercial applications, and to alter it and
  redistribute it freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must
     not claim that you wrote the original software. If you use this
     software in a product, an acknowledgment in the product
     documentation would be appreciated but is not required.

  2. Altered source versions must be plainly marked as such, and must
     not be misrepresented as being the original software.

  3. This notice may not be removed or altered from any source
     distribution.

  The user interface used with the installer is

  Copyright (C) 2002-2005 Joost Verburg

  [It is distributed along with NSIS and the same conditions as stated
   above apply]


GLIB is

  Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
  Copyright (C) 1995-2011 Red Hat, Inc.
  Copyright (C) 2008-2010 Novell, Inc.
  Copyright (C) 2008-2010 Codethink Limited.
  Copyright (C) 2008-2010 Collabora, Ltd.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place - Suite 330,
  Boston, MA 02111-1307, USA.

  See the AUTHORS file for a list of people on the GLib Team.  See the
  ChangeLog files for a list of changes.  These files are distributed
  with GLib at ftp://ftp.gtk.org/pub/gtk/.


GPA is

  Copyright (C) 2000-2002 G-N-U GmbH (http://www.g-n-u.de)
  Copyright (C) 2002-2003 Miguel Coca.
  Copyright (C) 2005-2013 g10 Code GmbH

  GPA uses fragments from the following programs and libraries:
  JNLIB, Copyright (C) 1998-2000 Free Software Foundation, Inc.
  GPGME, Copyright (C) 2000-2001 Werner Koch
  WinPT, Copyright (C) 2000-2002 Timo Schulz
  (For details, see the file `AUTHORS'.)

  GPA is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.

  GPA is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, see <http://www.gnu.org/licenses/>.


GPGEX is

  Copyright (C) 2007 g10 Code GmbH

  GpgEX is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  GpgEX is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
  02110-1301, USA.


GPGME is

  Copyright (C) 2000 Werner Koch
  Copyright (C) 2001--2013 g10 Code GmbH

  GPGME is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of
  the License, or (at your option) any later version.

  GPGME is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, see <http://www.gnu.org/licenses/>.

  See the files AUTHORS and THANKS for credits, further legal
  information and bug reporting addresses pertaining to GPGME.


GpgOL is

  Copyright (C) 2004, 2005, 2007, 2008, 2009, 2010,
                2011 g10 Code GmbH

  GpgOL is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  GpgOL is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, see <http://www.gnu.org/licenses/>.

  See the files AUTHORS and THANKS for credits, further legal
  information and bug reporting addresses pertaining to GpgOL.


GTK+ is

  Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place - Suite 330,
  Boston, MA 02111-1307, USA.

  Modified by the GTK+ Team and others 1997-2000.  See the AUTHORS
  file for a list of people on the GTK+ Team.  See the ChangeLog
  files for a list of changes.  These files are distributed with
  GTK+ at ftp://ftp.gtk.org/pub/gtk/.


LIBGCRYPT is

  Copyright 2000, 2002, 2003, 2004, 2007, 2008, 2009,
            2010, 2011, 2012 Free Software Foundation, Inc.
  Copyright 2012, 2013 g10 Code GmbH

  Libgcrypt is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser general Public License as
  published by the Free Software Foundation; either version 2.1 of
  the License, or (at your option) any later version.

  Libgcrypt is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, see <http://www.gnu.org/licenses/>.


LIBGPG-ERROR is

  Copyright 2003, 2004, 2010, 2013 g10 Code GmbH

  libgpg-error is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public License
  as published by the Free Software Foundation; either version 2.1 of
  the License, or (at your option) any later version.

  libgpg-error is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, see <http://www.gnu.org/licenses/>.


Pthreads-win32 is

  Copyright(C) 1998 John E. Bossom
  Copyright(C) 1999,2005 Pthreads-win32 contributors

  Most of this is work available under the GNU Lesser General Public
  License as published by the Free Software Foundation version 2.1 of
  the License.  The detailed terms are given in the file COPYING in
  the source distribution; that very file may not be modified and thus
  it is not possible to include it here.


BZIP2 is

  This program, "bzip2", the associated library "libbzip2", and all
  documentation, are copyright (C) 1996-2006 Julian R Seward.  All
  rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

  1. Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

  2. The origin of this software must not be misrepresented; you must
     not claim that you wrote the original software.  If you use this
     software in a product, an acknowledgment in the product
     documentation would be appreciated but is not required.

  3. Altered source versions must be plainly marked as such, and must
     not be misrepresented as being the original software.

  4. The name of the author may not be used to endorse or promote
     products derived from this software without specific prior written
     permission.

  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
  OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

  Julian Seward, Cambridge, UK.
  jseward@bzip.org
  bzip2/libbzip2 version 1.0.4 of 20 December 2006


ADNS

  adns is Copyright 2008 g10 Code GmbH, Copyright 1997-2000,2003,2006
  Ian Jackson, Copyright 1999-2000,2003,2006 Tony Finch, and Copyright
  (C) 1991 Massachusetts Institute of Technology.

  adns is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program and documentation is distributed in the hope that it will
  be useful, but without any warranty; without even the implied warranty
  of merchantability or fitness for a particular purpose. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with adns, or one should be available above; if not, write to
  the Free Software Foundation, 59 Temple Place - Suite 330, Boston,
  MA 02111-1307, USA, or email adns-maint@chiark.greenend.org.uk.


Paperkey

  Copyright (C) 2007, 2008, 2009 David Shaw <dshaw@jabberwocky.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
  MA 02110-1301, USA.

  The included man page is

  Copyright (C) 2007 Peter Palfrader <peter@palfrader.org>

  Examples have been taken from David Shaw's README. The license is
  the same as for Paperkey.


Scute

  Copyright 2006, 2008 g10 Code GmbH

  Scute is licensed under the GNU General Pubic License, either
  version 2, or (at your option) any later version with this special
  exception:

  In addition, as a special exception, g10 Code GmbH gives permission
  to link this library: with the Mozilla Foundation's code for
  Mozilla (or with modified versions of it that use the same license
  as the "Mozilla" code), and distribute the linked executables.  You
  must obey the GNU General Public License in all respects for all of
  the code used other than "Mozilla".  If you modify the software, you
  may extend this exception to your version of the software, but you
  are not obligated to do so.  If you do not wish to do so, delete this
  exception statement from your version and from all source files.


[Compiled by wk 2006-02-15, last updated 2015-11-25]


***end of file ***
