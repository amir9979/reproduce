/*
  File autogenerated by gengetopt version 2.20
  generated with the following command:
  ../src/gengetopt -i ./sample1.ggo -Fcmdline1 --long-help -u --show-required 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "getopt.h"

#include "cmdline1.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: sample1 -iINT|--int-opt=INT [-h|--help] [--full-help] [-V|--version] \n         [-sfilename|--str-opt=filename] [-mINT|--my-opt=INT] [--flag-opt] \n         [-F|--funct-opt] [--long-opt=LONG] [--def-opt=STRING] \n         [--enum-opt=STRING] [-DINT|--dependant=INT]  [FILES]...";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "  -h, --help              Print help and exit",
  "      --full-help         Print help, including hidden options, and exit",
  "  -V, --version           Print version and exit",
  "  -s, --str-opt=filename  A string option, for a filename",
  "\nA brief text description before the other options.\n",
  "  -m, --my-opt=INT        Another integer option, this time the description of \n                            the option should be \"quite\" long to require \n                            wrapping... possibly more than one wrapping :-) \n                            especially if I\n                            require a line break",
  "  -i, --int-opt=INT       A int option (mandatory)",
  "\nmore involved options:",
  "  the following options\n  are more complex",
  "",
  "      --flag-opt          A flag option  (default=off)",
  "  -F, --funct-opt         A function option",
  "\nlast option section:",
  "      --long-opt=LONG     A long option",
  "      --def-opt=STRING    A string option with default  (default=`Hello')",
  "      --enum-opt=STRING   A string option with list of values  (possible \n                            values=\"foo\", \"bar\", \"hello\", \"bye\" \n                            default=`hello')",
  "  -D, --dependant=INT     option that depends on str-opt",
  "\nAn ending text.",
    0
};
const char *gengetopt_args_info_full_help[] = {
  "  -h, --help              Print help and exit",
  "      --full-help         Print help, including hidden options, and exit",
  "  -V, --version           Print version and exit",
  "  -s, --str-opt=filename  A string option, for a filename",
  "\nA brief text description before the other options.\n",
  "  -m, --my-opt=INT        Another integer option, this time the description of \n                            the option should be \"quite\" long to require \n                            wrapping... possibly more than one wrapping :-) \n                            especially if I\n                            require a line break",
  "  -i, --int-opt=INT       A int option (mandatory)",
  "\nmore involved options:",
  "  the following options\n  are more complex",
  "",
  "      --flag-opt          A flag option  (default=off)",
  "  -F, --funct-opt         A function option",
  "\nlast option section:",
  "      --long-opt=LONG     A long option",
  "      --def-opt=STRING    A string option with default  (default=`Hello')",
  "      --enum-opt=STRING   A string option with list of values  (possible \n                            values=\"foo\", \"bar\", \"hello\", \"bye\" \n                            default=`hello')",
  "  -S, --secret=INT        hidden option will not appear in --help",
  "  -D, --dependant=INT     option that depends on str-opt",
  "\nAn ending text.",
    0
};

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required, const char *additional_error);

static int
cmdline_parser_required2 (struct gengetopt_args_info *args_info, const char *prog_name, const char *additional_error);

char *cmdline_parser_enum_opt_values[] = {"foo", "bar", "hello", "bye", 0} ;	/* Possible values for enum-opt.  */

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->full_help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->str_opt_given = 0 ;
  args_info->my_opt_given = 0 ;
  args_info->int_opt_given = 0 ;
  args_info->flag_opt_given = 0 ;
  args_info->funct_opt_given = 0 ;
  args_info->long_opt_given = 0 ;
  args_info->def_opt_given = 0 ;
  args_info->enum_opt_given = 0 ;
  args_info->secret_given = 0 ;
  args_info->dependant_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  args_info->str_opt_arg = NULL;
  args_info->str_opt_orig = NULL;
  args_info->my_opt_orig = NULL;
  args_info->int_opt_orig = NULL;
  args_info->flag_opt_flag = 0;
  args_info->long_opt_orig = NULL;
  args_info->def_opt_arg = gengetopt_strdup ("Hello");
  args_info->def_opt_orig = NULL;
  args_info->enum_opt_arg = gengetopt_strdup ("hello");
  args_info->enum_opt_orig = NULL;
  args_info->secret_orig = NULL;
  args_info->dependant_orig = NULL;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{
  args_info->help_help = gengetopt_args_info_full_help[0] ;
  args_info->full_help_help = gengetopt_args_info_full_help[1] ;
  args_info->version_help = gengetopt_args_info_full_help[2] ;
  args_info->str_opt_help = gengetopt_args_info_full_help[3] ;
  args_info->my_opt_help = gengetopt_args_info_full_help[4] ;
  args_info->int_opt_help = gengetopt_args_info_full_help[5] ;
  args_info->flag_opt_help = gengetopt_args_info_full_help[8] ;
  args_info->funct_opt_help = gengetopt_args_info_full_help[9] ;
  args_info->long_opt_help = gengetopt_args_info_full_help[11] ;
  args_info->def_opt_help = gengetopt_args_info_full_help[12] ;
  args_info->enum_opt_help = gengetopt_args_info_full_help[13] ;
  args_info->secret_help = gengetopt_args_info_full_help[14] ;
  args_info->dependant_help = gengetopt_args_info_full_help[15] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n", CMDLINE_PARSER_PACKAGE, CMDLINE_PARSER_VERSION);
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  printf("\n%s\n\n", gengetopt_args_info_usage);

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n", gengetopt_args_info_description);

  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_print_full_help (void)
{
  int i = 0;
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  printf("\n%s\n\n", gengetopt_args_info_usage);

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n", gengetopt_args_info_description);

  while (gengetopt_args_info_full_help[i])
    printf("%s\n", gengetopt_args_info_full_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = NULL;
  args_info->inputs_num = 0;
}

static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{
  
  unsigned int i;
  if (args_info->str_opt_arg)
    {
      free (args_info->str_opt_arg); /* free previous argument */
      args_info->str_opt_arg = 0;
    }
  if (args_info->str_opt_orig)
    {
      free (args_info->str_opt_orig); /* free previous argument */
      args_info->str_opt_orig = 0;
    }
  if (args_info->my_opt_orig)
    {
      free (args_info->my_opt_orig); /* free previous argument */
      args_info->my_opt_orig = 0;
    }
  if (args_info->int_opt_orig)
    {
      free (args_info->int_opt_orig); /* free previous argument */
      args_info->int_opt_orig = 0;
    }
  if (args_info->long_opt_orig)
    {
      free (args_info->long_opt_orig); /* free previous argument */
      args_info->long_opt_orig = 0;
    }
  if (args_info->def_opt_arg)
    {
      free (args_info->def_opt_arg); /* free previous argument */
      args_info->def_opt_arg = 0;
    }
  if (args_info->def_opt_orig)
    {
      free (args_info->def_opt_orig); /* free previous argument */
      args_info->def_opt_orig = 0;
    }
  if (args_info->enum_opt_arg)
    {
      free (args_info->enum_opt_arg); /* free previous argument */
      args_info->enum_opt_arg = 0;
    }
  if (args_info->enum_opt_orig)
    {
      free (args_info->enum_opt_orig); /* free previous argument */
      args_info->enum_opt_orig = 0;
    }
  if (args_info->secret_orig)
    {
      free (args_info->secret_orig); /* free previous argument */
      args_info->secret_orig = 0;
    }
  if (args_info->dependant_orig)
    {
      free (args_info->dependant_orig); /* free previous argument */
      args_info->dependant_orig = 0;
    }
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);
  
  if (args_info->inputs_num)
    free (args_info->inputs);
  
  clear_given (args_info);
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  if (args_info->help_given) {
    fprintf(outfile, "%s\n", "help");
  }
  if (args_info->full_help_given) {
    fprintf(outfile, "%s\n", "full-help");
  }
  if (args_info->version_given) {
    fprintf(outfile, "%s\n", "version");
  }
  if (args_info->str_opt_given) {
    if (args_info->str_opt_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "str-opt", args_info->str_opt_orig);
    } else {
      fprintf(outfile, "%s\n", "str-opt");
    }
  }
  if (args_info->my_opt_given) {
    if (args_info->my_opt_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "my-opt", args_info->my_opt_orig);
    } else {
      fprintf(outfile, "%s\n", "my-opt");
    }
  }
  if (args_info->int_opt_given) {
    if (args_info->int_opt_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "int-opt", args_info->int_opt_orig);
    } else {
      fprintf(outfile, "%s\n", "int-opt");
    }
  }
  if (args_info->flag_opt_given) {
    fprintf(outfile, "%s\n", "flag-opt");
  }
  if (args_info->funct_opt_given) {
    fprintf(outfile, "%s\n", "funct-opt");
  }
  if (args_info->long_opt_given) {
    if (args_info->long_opt_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "long-opt", args_info->long_opt_orig);
    } else {
      fprintf(outfile, "%s\n", "long-opt");
    }
  }
  if (args_info->def_opt_given) {
    if (args_info->def_opt_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "def-opt", args_info->def_opt_orig);
    } else {
      fprintf(outfile, "%s\n", "def-opt");
    }
  }
  if (args_info->enum_opt_given) {
    if (args_info->enum_opt_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "enum-opt", args_info->enum_opt_orig);
    } else {
      fprintf(outfile, "%s\n", "enum-opt");
    }
  }
  if (args_info->secret_given) {
    if (args_info->secret_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "secret", args_info->secret_orig);
    } else {
      fprintf(outfile, "%s\n", "secret");
    }
  }
  if (args_info->dependant_given) {
    if (args_info->dependant_orig) {
      fprintf(outfile, "%s=\"%s\"\n", "dependant", args_info->dependant_orig);
    } else {
      fprintf(outfile, "%s\n", "dependant");
    }
  }
  
  fclose (outfile);

  i = EXIT_SUCCESS;
  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/*
 * Returns:
 * - the index of the matched value
 * - -1 if no argument has been specified
 * - -2 if more than one value has matched
 */
static int
check_possible_values(const char *val, char *values[])
{
  int i, found, last;
  size_t len;

  if (!val)   /* otherwise strlen() crashes below */
    return -1; /* -1 means no argument for the option */

  found = last = 0;

  for (i = 0, len = strlen(val); values[i]; ++i)
    {
      if (strncmp(val, values[i], len) == 0)
        {
          ++found;
          last = i;
          if (strlen(values[i]) == len)
            return i; /* exact macth no need to check more */
        }
    }

  if (found == 1) /* one match: OK */
    return last;

  return (found ? -2 : -1); /* return many values are matched */
}


/* gengetopt_strdup() */
/* strdup.c replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = NULL;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser2 (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;

  result = cmdline_parser_internal (argc, argv, args_info, override, initialize, check_required, NULL);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  int result = EXIT_SUCCESS;

  if (cmdline_parser_required2(args_info, prog_name, NULL) > 0)
    result = EXIT_FAILURE;

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser_required2 (struct gengetopt_args_info *args_info, const char *prog_name, const char *additional_error)
{
  int error = 0;

  /* checks for required options */
  if (! args_info->int_opt_given)
    {
      fprintf (stderr, "%s: '--int-opt' ('-i') option required%s\n", prog_name, (additional_error ? additional_error : ""));
      error = 1;
    }
  
  
  /* checks for dependences among options */
  if (args_info->dependant_given && ! args_info->str_opt_given)
    {
      fprintf (stderr, "%s: '--dependant' ('-D') option depends on option 'str-opt'%s\n", prog_name, (additional_error ? additional_error : ""));
      error = 1;
    }

  return error;
}

int
cmdline_parser_internal (int argc, char * const *argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error = 0;
  struct gengetopt_args_info local_args_info;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = 1;
  optopt = '?';

  while (1)
    {
      int found = 0;
      int option_index = 0;
      char *stop_char;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "full-help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "str-opt",	1, NULL, 's' },
        { "my-opt",	1, NULL, 'm' },
        { "int-opt",	1, NULL, 'i' },
        { "flag-opt",	0, NULL, 0 },
        { "funct-opt",	0, NULL, 'F' },
        { "long-opt",	1, NULL, 0 },
        { "def-opt",	1, NULL, 0 },
        { "enum-opt",	1, NULL, 0 },
        { "secret",	1, NULL, 'S' },
        { "dependant",	1, NULL, 'D' },
        { NULL,	0, NULL, 0 }
      };

      stop_char = 0;
      c = getopt_long (argc, argv, "hVs:m:i:FS:D:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          cmdline_parser_print_help ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          cmdline_parser_print_version ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 's':	/* A string option, for a filename.  */
          if (local_args_info.str_opt_given)
            {
              fprintf (stderr, "%s: `--str-opt' (`-s') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->str_opt_given && ! override)
            continue;
          local_args_info.str_opt_given = 1;
          args_info->str_opt_given = 1;
          if (args_info->str_opt_arg)
            free (args_info->str_opt_arg); /* free previous string */
          args_info->str_opt_arg = gengetopt_strdup (optarg);
          if (args_info->str_opt_orig)
            free (args_info->str_opt_orig); /* free previous string */
          args_info->str_opt_orig = gengetopt_strdup (optarg);
          break;

        case 'm':	/* Another integer option, this time the description of the option should be \"quite\" long to require wrapping... possibly more than one wrapping :-) especially if I\nrequire a line break.  */
          if (local_args_info.my_opt_given)
            {
              fprintf (stderr, "%s: `--my-opt' (`-m') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->my_opt_given && ! override)
            continue;
          local_args_info.my_opt_given = 1;
          args_info->my_opt_given = 1;
          args_info->my_opt_arg = strtol (optarg, &stop_char, 0);
          if (!(stop_char && *stop_char == '\0')) {
            fprintf(stderr, "%s: invalid numeric value: %s\n", argv[0], optarg);
            goto failure;
          }
          if (args_info->my_opt_orig)
            free (args_info->my_opt_orig); /* free previous string */
          args_info->my_opt_orig = gengetopt_strdup (optarg);
          break;

        case 'i':	/* A int option.  */
          if (local_args_info.int_opt_given)
            {
              fprintf (stderr, "%s: `--int-opt' (`-i') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->int_opt_given && ! override)
            continue;
          local_args_info.int_opt_given = 1;
          args_info->int_opt_given = 1;
          args_info->int_opt_arg = strtol (optarg, &stop_char, 0);
          if (!(stop_char && *stop_char == '\0')) {
            fprintf(stderr, "%s: invalid numeric value: %s\n", argv[0], optarg);
            goto failure;
          }
          if (args_info->int_opt_orig)
            free (args_info->int_opt_orig); /* free previous string */
          args_info->int_opt_orig = gengetopt_strdup (optarg);
          break;

        case 'F':	/* A function option.  */
          if (local_args_info.funct_opt_given)
            {
              fprintf (stderr, "%s: `--funct-opt' (`-F') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->funct_opt_given && ! override)
            continue;
          local_args_info.funct_opt_given = 1;
          args_info->funct_opt_given = 1;
          break;

        case 'S':	/* hidden option will not appear in --help.  */
          if (local_args_info.secret_given)
            {
              fprintf (stderr, "%s: `--secret' (`-S') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->secret_given && ! override)
            continue;
          local_args_info.secret_given = 1;
          args_info->secret_given = 1;
          args_info->secret_arg = strtol (optarg, &stop_char, 0);
          if (!(stop_char && *stop_char == '\0')) {
            fprintf(stderr, "%s: invalid numeric value: %s\n", argv[0], optarg);
            goto failure;
          }
          if (args_info->secret_orig)
            free (args_info->secret_orig); /* free previous string */
          args_info->secret_orig = gengetopt_strdup (optarg);
          break;

        case 'D':	/* option that depends on str-opt.  */
          if (local_args_info.dependant_given)
            {
              fprintf (stderr, "%s: `--dependant' (`-D') option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
              goto failure;
            }
          if (args_info->dependant_given && ! override)
            continue;
          local_args_info.dependant_given = 1;
          args_info->dependant_given = 1;
          args_info->dependant_arg = strtol (optarg, &stop_char, 0);
          if (!(stop_char && *stop_char == '\0')) {
            fprintf(stderr, "%s: invalid numeric value: %s\n", argv[0], optarg);
            goto failure;
          }
          if (args_info->dependant_orig)
            free (args_info->dependant_orig); /* free previous string */
          args_info->dependant_orig = gengetopt_strdup (optarg);
          break;


        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "full-help") == 0) {
            cmdline_parser_print_full_help ();
            cmdline_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }
          

          /* A flag option.  */
          if (strcmp (long_options[option_index].name, "flag-opt") == 0)
          {
            if (local_args_info.flag_opt_given)
              {
                fprintf (stderr, "%s: `--flag-opt' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->flag_opt_given && ! override)
              continue;
            local_args_info.flag_opt_given = 1;
            args_info->flag_opt_given = 1;
            args_info->flag_opt_flag = !(args_info->flag_opt_flag);
          }
          /* A long option.  */
          else if (strcmp (long_options[option_index].name, "long-opt") == 0)
          {
            if (local_args_info.long_opt_given)
              {
                fprintf (stderr, "%s: `--long-opt' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->long_opt_given && ! override)
              continue;
            local_args_info.long_opt_given = 1;
            args_info->long_opt_given = 1;
            args_info->long_opt_arg = strtol (optarg, &stop_char, 0);
            if (!(stop_char && *stop_char == '\0')) {
              fprintf(stderr, "%s: invalid numeric value: %s\n", argv[0], optarg);
              goto failure;
            }
            if (args_info->long_opt_orig)
              free (args_info->long_opt_orig); /* free previous string */
            args_info->long_opt_orig = gengetopt_strdup (optarg);
          }
          /* A string option with default.  */
          else if (strcmp (long_options[option_index].name, "def-opt") == 0)
          {
            if (local_args_info.def_opt_given)
              {
                fprintf (stderr, "%s: `--def-opt' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->def_opt_given && ! override)
              continue;
            local_args_info.def_opt_given = 1;
            args_info->def_opt_given = 1;
            if (args_info->def_opt_arg)
              free (args_info->def_opt_arg); /* free previous string */
            args_info->def_opt_arg = gengetopt_strdup (optarg);
            if (args_info->def_opt_orig)
              free (args_info->def_opt_orig); /* free previous string */
            args_info->def_opt_orig = gengetopt_strdup (optarg);
          }
          /* A string option with list of values.  */
          else if (strcmp (long_options[option_index].name, "enum-opt") == 0)
          {
            if (local_args_info.enum_opt_given)
              {
                fprintf (stderr, "%s: `--enum-opt' option given more than once%s\n", argv[0], (additional_error ? additional_error : ""));
                goto failure;
              }
            if ((found = check_possible_values((optarg ? optarg : 0 ), cmdline_parser_enum_opt_values)) < 0)
              {
                fprintf (stderr, "%s: %s argument, \"%s\", for option `--enum-opt'%s\n", argv[0], (found == -2) ? "ambiguous" : "invalid", optarg, (additional_error ? additional_error : ""));
                goto failure;
              }
            if (args_info->enum_opt_given && ! override)
              continue;
            local_args_info.enum_opt_given = 1;
            args_info->enum_opt_given = 1;
            if (args_info->enum_opt_arg)
              free (args_info->enum_opt_arg); /* free previous string */
            args_info->enum_opt_arg = gengetopt_strdup (cmdline_parser_enum_opt_values[found]);
            if (args_info->enum_opt_orig)
              free (args_info->enum_opt_orig); /* free previous string */
            args_info->enum_opt_orig = gengetopt_strdup (optarg);
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



  if (check_required)
    {
      error += cmdline_parser_required2 (args_info, argv[0], additional_error);
    }

  cmdline_parser_release (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}