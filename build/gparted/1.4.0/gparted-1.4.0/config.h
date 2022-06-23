/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 when help documentation is built */
#define ENABLE_HELP_DOC 1

/* Define to 1 to enable deletion of old partitions before creating a loop
   table workaround */
/* #undef ENABLE_LOOP_DELETE_OLD_PTNS_WORKAROUND */

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Define to 1 if online resize is enabled */
#define ENABLE_ONLINE_RESIZE 1

/* description */
#define GETTEXT_PACKAGE "gparted"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if gtk provides gtk_show_uri_on_window function. */
#define HAVE_GTK_SHOW_URI_ON_WINDOW 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if gtkmm provides Gtk::Label::set_xalign() method. */
#define HAVE_LABEL_SET_XALIGN 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `parted' library (-lparted). */
#define HAVE_LIBPARTED 1

/* Define to 1 if have libparted fs resize capability */
#define HAVE_LIBPARTED_FS_RESIZE 1

/* Define to 1 if you have the `uuid' library (-luuid). */
#define HAVE_LIBUUID 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if gtkmm provides
   Gtk::ScrolledWindow::set_propagate_natural_width() method. */
#define HAVE_SET_PROPAGATE_NATURAL_WIDTH 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "gparted"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://gitlab.gnome.org/GNOME/gparted/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "gparted"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gparted 1.4.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gparted"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4.0"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define to 1 to use native libparted /dev/mapper dmraid support */
/* #undef USE_LIBPARTED_DMRAID */

/* Version number of package */
#define VERSION "1.4.0"
