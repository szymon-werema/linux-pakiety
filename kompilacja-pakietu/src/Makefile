# Makefile.in generated by automake 1.16.1 from Makefile.am.
# src/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2018 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/gparted
pkgincludedir = $(includedir)/gparted
pkglibdir = $(libdir)/gparted
pkglibexecdir = $(libexecdir)/gparted
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = x86_64-pc-linux-gnu
libexec_PROGRAMS = gpartedbin$(EXEEXT)
subdir = src
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/ax_cxx_compile_stdcxx.m4 \
	$(top_srcdir)/m4/ax_cxx_compile_stdcxx_11.m4 \
	$(top_srcdir)/m4/intltool.m4 $(top_srcdir)/m4/libtool.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__installdirs = "$(DESTDIR)$(libexecdir)"
PROGRAMS = $(libexec_PROGRAMS)
am_gpartedbin_OBJECTS = BCache_Info.$(OBJEXT) BlockSpecial.$(OBJEXT) \
	CopyBlocks.$(OBJEXT) DMRaid.$(OBJEXT) Device.$(OBJEXT) \
	DialogFeatures.$(OBJEXT) DialogManageFlags.$(OBJEXT) \
	DialogPasswordEntry.$(OBJEXT) Dialog_Base_Partition.$(OBJEXT) \
	Dialog_Disklabel.$(OBJEXT) Dialog_FileSystem_Label.$(OBJEXT) \
	Dialog_Partition_Copy.$(OBJEXT) \
	Dialog_Partition_Info.$(OBJEXT) \
	Dialog_Partition_Name.$(OBJEXT) Dialog_Partition_New.$(OBJEXT) \
	Dialog_Partition_Resize_Move.$(OBJEXT) \
	Dialog_Progress.$(OBJEXT) Dialog_Rescue_Data.$(OBJEXT) \
	DrawingAreaVisualDisk.$(OBJEXT) FS_Info.$(OBJEXT) \
	FileSystem.$(OBJEXT) Frame_Resizer_Base.$(OBJEXT) \
	Frame_Resizer_Extended.$(OBJEXT) GParted_Core.$(OBJEXT) \
	HBoxOperations.$(OBJEXT) LVM2_PV_Info.$(OBJEXT) \
	LUKS_Info.$(OBJEXT) MenuHelpers.$(OBJEXT) Mount_Info.$(OBJEXT) \
	Operation.$(OBJEXT) OperationChangeUUID.$(OBJEXT) \
	OperationCheck.$(OBJEXT) OperationCopy.$(OBJEXT) \
	OperationCreate.$(OBJEXT) OperationDelete.$(OBJEXT) \
	OperationDetail.$(OBJEXT) OperationFormat.$(OBJEXT) \
	OperationLabelFileSystem.$(OBJEXT) \
	OperationNamePartition.$(OBJEXT) OperationResizeMove.$(OBJEXT) \
	OptionComboBox.$(OBJEXT) Partition.$(OBJEXT) \
	PartitionLUKS.$(OBJEXT) PartitionVector.$(OBJEXT) \
	PasswordRAMStore.$(OBJEXT) PipeCapture.$(OBJEXT) \
	Proc_Partitions_Info.$(OBJEXT) ProgressBar.$(OBJEXT) \
	SupportedFileSystems.$(OBJEXT) SWRaid_Info.$(OBJEXT) \
	TreeView_Detail.$(OBJEXT) Utils.$(OBJEXT) \
	Win_GParted.$(OBJEXT) btrfs.$(OBJEXT) exfat.$(OBJEXT) \
	ext2.$(OBJEXT) f2fs.$(OBJEXT) fat16.$(OBJEXT) hfs.$(OBJEXT) \
	hfsplus.$(OBJEXT) jfs.$(OBJEXT) linux_swap.$(OBJEXT) \
	lvm2_pv.$(OBJEXT) luks.$(OBJEXT) main.$(OBJEXT) \
	minix.$(OBJEXT) nilfs2.$(OBJEXT) ntfs.$(OBJEXT) \
	reiser4.$(OBJEXT) reiserfs.$(OBJEXT) udf.$(OBJEXT) \
	xfs.$(OBJEXT)
gpartedbin_OBJECTS = $(am_gpartedbin_OBJECTS)
am__DEPENDENCIES_1 =
gpartedbin_DEPENDENCIES = $(am__DEPENDENCIES_1) $(am__DEPENDENCIES_1)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__maybe_remake_depfiles = depfiles
am__depfiles_remade = ./$(DEPDIR)/BCache_Info.Po \
	./$(DEPDIR)/BlockSpecial.Po ./$(DEPDIR)/CopyBlocks.Po \
	./$(DEPDIR)/DMRaid.Po ./$(DEPDIR)/Device.Po \
	./$(DEPDIR)/DialogFeatures.Po ./$(DEPDIR)/DialogManageFlags.Po \
	./$(DEPDIR)/DialogPasswordEntry.Po \
	./$(DEPDIR)/Dialog_Base_Partition.Po \
	./$(DEPDIR)/Dialog_Disklabel.Po \
	./$(DEPDIR)/Dialog_FileSystem_Label.Po \
	./$(DEPDIR)/Dialog_Partition_Copy.Po \
	./$(DEPDIR)/Dialog_Partition_Info.Po \
	./$(DEPDIR)/Dialog_Partition_Name.Po \
	./$(DEPDIR)/Dialog_Partition_New.Po \
	./$(DEPDIR)/Dialog_Partition_Resize_Move.Po \
	./$(DEPDIR)/Dialog_Progress.Po \
	./$(DEPDIR)/Dialog_Rescue_Data.Po \
	./$(DEPDIR)/DrawingAreaVisualDisk.Po ./$(DEPDIR)/FS_Info.Po \
	./$(DEPDIR)/FileSystem.Po ./$(DEPDIR)/Frame_Resizer_Base.Po \
	./$(DEPDIR)/Frame_Resizer_Extended.Po \
	./$(DEPDIR)/GParted_Core.Po ./$(DEPDIR)/HBoxOperations.Po \
	./$(DEPDIR)/LUKS_Info.Po ./$(DEPDIR)/LVM2_PV_Info.Po \
	./$(DEPDIR)/MenuHelpers.Po ./$(DEPDIR)/Mount_Info.Po \
	./$(DEPDIR)/Operation.Po ./$(DEPDIR)/OperationChangeUUID.Po \
	./$(DEPDIR)/OperationCheck.Po ./$(DEPDIR)/OperationCopy.Po \
	./$(DEPDIR)/OperationCreate.Po ./$(DEPDIR)/OperationDelete.Po \
	./$(DEPDIR)/OperationDetail.Po ./$(DEPDIR)/OperationFormat.Po \
	./$(DEPDIR)/OperationLabelFileSystem.Po \
	./$(DEPDIR)/OperationNamePartition.Po \
	./$(DEPDIR)/OperationResizeMove.Po \
	./$(DEPDIR)/OptionComboBox.Po ./$(DEPDIR)/Partition.Po \
	./$(DEPDIR)/PartitionLUKS.Po ./$(DEPDIR)/PartitionVector.Po \
	./$(DEPDIR)/PasswordRAMStore.Po ./$(DEPDIR)/PipeCapture.Po \
	./$(DEPDIR)/Proc_Partitions_Info.Po ./$(DEPDIR)/ProgressBar.Po \
	./$(DEPDIR)/SWRaid_Info.Po ./$(DEPDIR)/SupportedFileSystems.Po \
	./$(DEPDIR)/TreeView_Detail.Po ./$(DEPDIR)/Utils.Po \
	./$(DEPDIR)/Win_GParted.Po ./$(DEPDIR)/btrfs.Po \
	./$(DEPDIR)/exfat.Po ./$(DEPDIR)/ext2.Po ./$(DEPDIR)/f2fs.Po \
	./$(DEPDIR)/fat16.Po ./$(DEPDIR)/hfs.Po ./$(DEPDIR)/hfsplus.Po \
	./$(DEPDIR)/jfs.Po ./$(DEPDIR)/linux_swap.Po \
	./$(DEPDIR)/luks.Po ./$(DEPDIR)/lvm2_pv.Po ./$(DEPDIR)/main.Po \
	./$(DEPDIR)/minix.Po ./$(DEPDIR)/nilfs2.Po ./$(DEPDIR)/ntfs.Po \
	./$(DEPDIR)/reiser4.Po ./$(DEPDIR)/reiserfs.Po \
	./$(DEPDIR)/udf.Po ./$(DEPDIR)/xfs.Po
am__mv = mv -f
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
LTCXXCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CXX $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CXX) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CXXFLAGS) $(CXXFLAGS)
AM_V_CXX = $(am__v_CXX_$(V))
am__v_CXX_ = $(am__v_CXX_$(AM_DEFAULT_VERBOSITY))
am__v_CXX_0 = @echo "  CXX     " $@;
am__v_CXX_1 = 
CXXLD = $(CXX)
CXXLINK = $(LIBTOOL) $(AM_V_lt) --tag=CXX $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CXXLD) $(AM_CXXFLAGS) \
	$(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CXXLD = $(am__v_CXXLD_$(V))
am__v_CXXLD_ = $(am__v_CXXLD_$(AM_DEFAULT_VERBOSITY))
am__v_CXXLD_0 = @echo "  CXXLD   " $@;
am__v_CXXLD_1 = 
SOURCES = $(gpartedbin_SOURCES)
DIST_SOURCES = $(gpartedbin_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
am__DIST_COMMON = $(srcdir)/Makefile.in $(top_srcdir)/depcomp \
	$(top_srcdir)/mkinstalldirs
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/kali/Pobrane/gparted-1.4.0/missing aclocal-1.16
ALL_LINGUAS = 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
AUTOCONF = ${SHELL} /home/kali/Pobrane/gparted-1.4.0/missing autoconf
AUTOHEADER = ${SHELL} /home/kali/Pobrane/gparted-1.4.0/missing autoheader
AUTOMAKE = ${SHELL} /home/kali/Pobrane/gparted-1.4.0/missing automake-1.16
AWK = gawk
CATALOGS = 
CATOBJEXT = .gmo
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2
CPP = gcc -E
CPPFLAGS = 
CXX = g++ -std=gnu++11
CXXCPP = g++ -E -std=gnu++11
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2
CYGPATH_W = echo
DATADIRNAME = share
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
ENABLE_XHOST_ROOT = no
EXEEXT = 
FGREP = /usr/bin/grep -F
GETTEXT_PACKAGE = gparted
GKSUPROG = pkexec --disable-internal-agent
GLIBMM_CFLAGS = -I/usr/include/glibmm-2.4 -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/sigc++-2.0 -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include
GLIBMM_LIBS = -lglibmm-2.4 -lgobject-2.0 -lglib-2.0 -lsigc-2.0
GMOFILES = 
GMSGFMT = /usr/bin/msgfmt
GREP = /usr/bin/grep
GTEST_CPPFLAGS = -DGTEST_HAS_PTHREAD=1
GTEST_CXXFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -pthread -I/usr/include/gtkmm-3.0 -I/usr/lib/x86_64-linux-gnu/gtkmm-3.0/include -I/usr/include/atkmm-1.6 -I/usr/lib/x86_64-linux-gnu/atkmm-1.6/include -I/usr/include/gtk-3.0/unix-print -I/usr/include/gdkmm-3.0 -I/usr/lib/x86_64-linux-gnu/gdkmm-3.0/include -I/usr/include/giomm-2.4 -I/usr/lib/x86_64-linux-gnu/giomm-2.4/include -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pangomm-1.4 -I/usr/lib/x86_64-linux-gnu/pangomm-1.4/include -I/usr/include/glibmm-2.4 -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include -I/usr/include/cairomm-1.0 -I/usr/lib/x86_64-linux-gnu/cairomm-1.0/include -I/usr/include/sigc++-2.0 -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTEST_LDFLAGS = 
GTEST_LIBS = -lgthread-2.0 -pthread -lglib-2.0 -lgtkmm-3.0 -latkmm-1.6 -lgdkmm-3.0 -lgiomm-2.4 -lgtk-3 -lgdk-3 -latk-1.0 -lcairo-gobject -lgio-2.0 -lpangomm-1.4 -lglibmm-2.4 -lcairomm-1.0 -lsigc-2.0 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -lcairo -lgdk_pixbuf-2.0 -lgobject-2.0 -lglib-2.0
GTHREAD_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTHREAD_LIBS = -lgthread-2.0 -pthread -lglib-2.0
GTKMM_CFLAGS = -pthread -I/usr/include/gtkmm-3.0 -I/usr/lib/x86_64-linux-gnu/gtkmm-3.0/include -I/usr/include/atkmm-1.6 -I/usr/lib/x86_64-linux-gnu/atkmm-1.6/include -I/usr/include/gtk-3.0/unix-print -I/usr/include/gdkmm-3.0 -I/usr/lib/x86_64-linux-gnu/gdkmm-3.0/include -I/usr/include/giomm-2.4 -I/usr/lib/x86_64-linux-gnu/giomm-2.4/include -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pangomm-1.4 -I/usr/lib/x86_64-linux-gnu/pangomm-1.4/include -I/usr/include/glibmm-2.4 -I/usr/lib/x86_64-linux-gnu/glibmm-2.4/include -I/usr/include/cairomm-1.0 -I/usr/lib/x86_64-linux-gnu/cairomm-1.0/include -I/usr/include/sigc++-2.0 -I/usr/lib/x86_64-linux-gnu/sigc++-2.0/include -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTKMM_LIBS = -lgtkmm-3.0 -latkmm-1.6 -lgdkmm-3.0 -lgiomm-2.4 -lgtk-3 -lgdk-3 -latk-1.0 -lcairo-gobject -lgio-2.0 -lpangomm-1.4 -lglibmm-2.4 -lcairomm-1.0 -lsigc-2.0 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -lcairo -lgdk_pixbuf-2.0 -lgobject-2.0 -lglib-2.0
HAVE_CXX11 = 1
HELP_DIR = ${datadir}/help
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INSTOBJEXT = .mo
INTLLIBS = 
INTLTOOL_EXTRACT = /usr/bin/intltool-extract
INTLTOOL_MERGE = /usr/bin/intltool-merge
INTLTOOL_PERL = /usr/bin/perl
INTLTOOL_UPDATE = /usr/bin/intltool-update
INTLTOOL_V_MERGE = $(INTLTOOL__v_MERGE_$(V))
INTLTOOL_V_MERGE_OPTIONS = $(intltool__v_merge_options_$(V))
INTLTOOL__v_MERGE_ = $(INTLTOOL__v_MERGE_$(AM_DEFAULT_VERBOSITY))
INTLTOOL__v_MERGE_0 = @echo "  ITMRG " $@;
INTL_MACOSX_LIBS = 
ITSTOOL = itstool
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LIBOBJS = 
LIBS = -lparted-fs-resize -lparted -ldl -luuid 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_SYS_LIBRARY_PATH = 
MAINT = #
MAKEINFO = ${SHELL} /home/kali/Pobrane/gparted-1.4.0/missing makeinfo
MANIFEST_TOOL = :
MKDIR_P = /usr/bin/mkdir -p
MKINSTALLDIRS = ./mkinstalldirs
MSGFMT = /usr/bin/msgfmt
MSGFMT_OPTS = -c
MSGMERGE = /usr/bin/msgmerge
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = gparted
PACKAGE_BUGREPORT = https://gitlab.gnome.org/GNOME/gparted/issues
PACKAGE_NAME = gparted
PACKAGE_STRING = gparted 1.4.0
PACKAGE_TARNAME = gparted
PACKAGE_URL = 
PACKAGE_VERSION = 1.4.0
PATH_SEPARATOR = :
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
POFILES = 
POSUB = po
PO_IN_DATADIR_FALSE = 
PO_IN_DATADIR_TRUE = 
RANLIB = ranlib
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/bash
STRIP = strip
USE_NLS = yes
VERSION = 1.4.0
XGETTEXT = /usr/bin/xgettext
XMLLINT = xmllint
YELP_LC_DIST = true
YELP_LC_MEDIA_LINKS = true
abs_builddir = /home/kali/Pobrane/gparted-1.4.0/src
abs_srcdir = /home/kali/Pobrane/gparted-1.4.0/src
abs_top_builddir = /home/kali/Pobrane/gparted-1.4.0
abs_top_srcdir = /home/kali/Pobrane/gparted-1.4.0
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-pc-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/kali/Pobrane/gparted-1.4.0/install-sh
intltool__v_merge_options_ = $(intltool__v_merge_options_$(AM_DEFAULT_VERBOSITY))
intltool__v_merge_options_0 = -q
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = ${localstatedir}/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../
top_builddir = ..
top_srcdir = ..
AM_CPPFLAGS = \
	-I$(top_srcdir)/include				\
	$(GTHREAD_CFLAGS) 				\
	$(GTKMM_CFLAGS) 				\
	-DGNOMELOCALEDIR=\""$(datadir)/locale"\"

AM_CFLAGS = -Wall	
AM_CXXFLAGS = -Wall	
gpartedbin_SOURCES = \
	BCache_Info.cc			\
	BlockSpecial.cc			\
	CopyBlocks.cc			\
	DMRaid.cc			\
	Device.cc			\
	DialogFeatures.cc		\
	DialogManageFlags.cc		\
	DialogPasswordEntry.cc		\
	Dialog_Base_Partition.cc	\
	Dialog_Disklabel.cc		\
	Dialog_FileSystem_Label.cc	\
	Dialog_Partition_Copy.cc	\
	Dialog_Partition_Info.cc	\
	Dialog_Partition_Name.cc	\
	Dialog_Partition_New.cc		\
	Dialog_Partition_Resize_Move.cc	\
	Dialog_Progress.cc		\
	Dialog_Rescue_Data.cc		\
	DrawingAreaVisualDisk.cc	\
	FS_Info.cc			\
	FileSystem.cc			\
	Frame_Resizer_Base.cc		\
	Frame_Resizer_Extended.cc	\
	GParted_Core.cc			\
	HBoxOperations.cc		\
	LVM2_PV_Info.cc			\
	LUKS_Info.cc			\
	MenuHelpers.cc			\
	Mount_Info.cc			\
	Operation.cc			\
	OperationChangeUUID.cc		\
	OperationCheck.cc		\
	OperationCopy.cc		\
	OperationCreate.cc		\
	OperationDelete.cc		\
	OperationDetail.cc		\
	OperationFormat.cc		\
	OperationLabelFileSystem.cc	\
	OperationNamePartition.cc	\
	OperationResizeMove.cc		\
	OptionComboBox.cc		\
	Partition.cc			\
	PartitionLUKS.cc		\
	PartitionVector.cc		\
	PasswordRAMStore.cc		\
	PipeCapture.cc			\
	Proc_Partitions_Info.cc		\
	ProgressBar.cc			\
	SupportedFileSystems.cc		\
	SWRaid_Info.cc			\
	TreeView_Detail.cc		\
	Utils.cc			\
	Win_GParted.cc			\
	btrfs.cc			\
	exfat.cc			\
	ext2.cc				\
	f2fs.cc				\
	fat16.cc			\
	hfs.cc				\
	hfsplus.cc			\
	jfs.cc				\
	linux_swap.cc			\
	lvm2_pv.cc			\
	luks.cc				\
	main.cc				\
	minix.cc			\
	nilfs2.cc			\
	ntfs.cc				\
	reiser4.cc			\
	reiserfs.cc			\
	udf.cc				\
	xfs.cc

gpartedbin_LDADD = $(GTHREAD_LIBS) $(GTKMM_LIBS)
all: all-am

.SUFFIXES:
.SUFFIXES: .cc .lo .o .obj
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu src/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu src/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
install-libexecPROGRAMS: $(libexec_PROGRAMS)
	@$(NORMAL_INSTALL)
	@list='$(libexec_PROGRAMS)'; test -n "$(libexecdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libexecdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libexecdir)" || exit 1; \
	fi; \
	for p in $$list; do echo "$$p $$p"; done | \
	sed 's/$(EXEEXT)$$//' | \
	while read p p1; do if test -f $$p \
	 || test -f $$p1 \
	  ; then echo "$$p"; echo "$$p"; else :; fi; \
	done | \
	sed -e 'p;s,.*/,,;n;h' \
	    -e 's|.*|.|' \
	    -e 'p;x;s,.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/' | \
	sed 'N;N;N;s,\n, ,g' | \
	$(AWK) 'BEGIN { files["."] = ""; dirs["."] = 1 } \
	  { d=$$3; if (dirs[d] != 1) { print "d", d; dirs[d] = 1 } \
	    if ($$2 == $$4) files[d] = files[d] " " $$1; \
	    else { print "f", $$3 "/" $$4, $$1; } } \
	  END { for (d in files) print "f", d, files[d] }' | \
	while read type dir files; do \
	    if test "$$dir" = .; then dir=; else dir=/$$dir; fi; \
	    test -z "$$files" || { \
	    echo " $(INSTALL_PROGRAM_ENV) $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL_PROGRAM) $$files '$(DESTDIR)$(libexecdir)$$dir'"; \
	    $(INSTALL_PROGRAM_ENV) $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL_PROGRAM) $$files "$(DESTDIR)$(libexecdir)$$dir" || exit $$?; \
	    } \
	; done

uninstall-libexecPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(libexec_PROGRAMS)'; test -n "$(libexecdir)" || list=; \
	files=`for p in $$list; do echo "$$p"; done | \
	  sed -e 'h;s,^.*/,,;s/$(EXEEXT)$$//;$(transform)' \
	      -e 's/$$/$(EXEEXT)/' \
	`; \
	test -n "$$list" || exit 0; \
	echo " ( cd '$(DESTDIR)$(libexecdir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(libexecdir)" && rm -f $$files

clean-libexecPROGRAMS:
	@list='$(libexec_PROGRAMS)'; test -n "$$list" || exit 0; \
	echo " rm -f" $$list; \
	rm -f $$list || exit $$?; \
	test -n "$(EXEEXT)" || exit 0; \
	list=`for p in $$list; do echo "$$p"; done | sed 's/$(EXEEXT)$$//'`; \
	echo " rm -f" $$list; \
	rm -f $$list

gpartedbin$(EXEEXT): $(gpartedbin_OBJECTS) $(gpartedbin_DEPENDENCIES) $(EXTRA_gpartedbin_DEPENDENCIES) 
	@rm -f gpartedbin$(EXEEXT)
	$(AM_V_CXXLD)$(CXXLINK) $(gpartedbin_OBJECTS) $(gpartedbin_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/BCache_Info.Po # am--include-marker
include ./$(DEPDIR)/BlockSpecial.Po # am--include-marker
include ./$(DEPDIR)/CopyBlocks.Po # am--include-marker
include ./$(DEPDIR)/DMRaid.Po # am--include-marker
include ./$(DEPDIR)/Device.Po # am--include-marker
include ./$(DEPDIR)/DialogFeatures.Po # am--include-marker
include ./$(DEPDIR)/DialogManageFlags.Po # am--include-marker
include ./$(DEPDIR)/DialogPasswordEntry.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Base_Partition.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Disklabel.Po # am--include-marker
include ./$(DEPDIR)/Dialog_FileSystem_Label.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Partition_Copy.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Partition_Info.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Partition_Name.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Partition_New.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Partition_Resize_Move.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Progress.Po # am--include-marker
include ./$(DEPDIR)/Dialog_Rescue_Data.Po # am--include-marker
include ./$(DEPDIR)/DrawingAreaVisualDisk.Po # am--include-marker
include ./$(DEPDIR)/FS_Info.Po # am--include-marker
include ./$(DEPDIR)/FileSystem.Po # am--include-marker
include ./$(DEPDIR)/Frame_Resizer_Base.Po # am--include-marker
include ./$(DEPDIR)/Frame_Resizer_Extended.Po # am--include-marker
include ./$(DEPDIR)/GParted_Core.Po # am--include-marker
include ./$(DEPDIR)/HBoxOperations.Po # am--include-marker
include ./$(DEPDIR)/LUKS_Info.Po # am--include-marker
include ./$(DEPDIR)/LVM2_PV_Info.Po # am--include-marker
include ./$(DEPDIR)/MenuHelpers.Po # am--include-marker
include ./$(DEPDIR)/Mount_Info.Po # am--include-marker
include ./$(DEPDIR)/Operation.Po # am--include-marker
include ./$(DEPDIR)/OperationChangeUUID.Po # am--include-marker
include ./$(DEPDIR)/OperationCheck.Po # am--include-marker
include ./$(DEPDIR)/OperationCopy.Po # am--include-marker
include ./$(DEPDIR)/OperationCreate.Po # am--include-marker
include ./$(DEPDIR)/OperationDelete.Po # am--include-marker
include ./$(DEPDIR)/OperationDetail.Po # am--include-marker
include ./$(DEPDIR)/OperationFormat.Po # am--include-marker
include ./$(DEPDIR)/OperationLabelFileSystem.Po # am--include-marker
include ./$(DEPDIR)/OperationNamePartition.Po # am--include-marker
include ./$(DEPDIR)/OperationResizeMove.Po # am--include-marker
include ./$(DEPDIR)/OptionComboBox.Po # am--include-marker
include ./$(DEPDIR)/Partition.Po # am--include-marker
include ./$(DEPDIR)/PartitionLUKS.Po # am--include-marker
include ./$(DEPDIR)/PartitionVector.Po # am--include-marker
include ./$(DEPDIR)/PasswordRAMStore.Po # am--include-marker
include ./$(DEPDIR)/PipeCapture.Po # am--include-marker
include ./$(DEPDIR)/Proc_Partitions_Info.Po # am--include-marker
include ./$(DEPDIR)/ProgressBar.Po # am--include-marker
include ./$(DEPDIR)/SWRaid_Info.Po # am--include-marker
include ./$(DEPDIR)/SupportedFileSystems.Po # am--include-marker
include ./$(DEPDIR)/TreeView_Detail.Po # am--include-marker
include ./$(DEPDIR)/Utils.Po # am--include-marker
include ./$(DEPDIR)/Win_GParted.Po # am--include-marker
include ./$(DEPDIR)/btrfs.Po # am--include-marker
include ./$(DEPDIR)/exfat.Po # am--include-marker
include ./$(DEPDIR)/ext2.Po # am--include-marker
include ./$(DEPDIR)/f2fs.Po # am--include-marker
include ./$(DEPDIR)/fat16.Po # am--include-marker
include ./$(DEPDIR)/hfs.Po # am--include-marker
include ./$(DEPDIR)/hfsplus.Po # am--include-marker
include ./$(DEPDIR)/jfs.Po # am--include-marker
include ./$(DEPDIR)/linux_swap.Po # am--include-marker
include ./$(DEPDIR)/luks.Po # am--include-marker
include ./$(DEPDIR)/lvm2_pv.Po # am--include-marker
include ./$(DEPDIR)/main.Po # am--include-marker
include ./$(DEPDIR)/minix.Po # am--include-marker
include ./$(DEPDIR)/nilfs2.Po # am--include-marker
include ./$(DEPDIR)/ntfs.Po # am--include-marker
include ./$(DEPDIR)/reiser4.Po # am--include-marker
include ./$(DEPDIR)/reiserfs.Po # am--include-marker
include ./$(DEPDIR)/udf.Po # am--include-marker
include ./$(DEPDIR)/xfs.Po # am--include-marker

$(am__depfiles_remade):
	@$(MKDIR_P) $(@D)
	@echo '# dummy' >$@-t && $(am__mv) $@-t $@

am--depfiles: $(am__depfiles_remade)

.cc.o:
	$(AM_V_CXX)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CXX)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXXCOMPILE) -c -o $@ $<

.cc.obj:
	$(AM_V_CXX)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.obj$$||'`;\
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ `$(CYGPATH_W) '$<'` &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CXX)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXXCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.cc.lo:
	$(AM_V_CXX)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.lo$$||'`;\
	$(LTCXXCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Plo
#	$(AM_V_CXX)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(LTCXXCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) distdir-am

distdir-am: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS)
installdirs:
	for dir in "$(DESTDIR)$(libexecdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libexecPROGRAMS clean-libtool \
	mostlyclean-am

distclean: distclean-am
		-rm -f ./$(DEPDIR)/BCache_Info.Po
	-rm -f ./$(DEPDIR)/BlockSpecial.Po
	-rm -f ./$(DEPDIR)/CopyBlocks.Po
	-rm -f ./$(DEPDIR)/DMRaid.Po
	-rm -f ./$(DEPDIR)/Device.Po
	-rm -f ./$(DEPDIR)/DialogFeatures.Po
	-rm -f ./$(DEPDIR)/DialogManageFlags.Po
	-rm -f ./$(DEPDIR)/DialogPasswordEntry.Po
	-rm -f ./$(DEPDIR)/Dialog_Base_Partition.Po
	-rm -f ./$(DEPDIR)/Dialog_Disklabel.Po
	-rm -f ./$(DEPDIR)/Dialog_FileSystem_Label.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Copy.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Info.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Name.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_New.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Resize_Move.Po
	-rm -f ./$(DEPDIR)/Dialog_Progress.Po
	-rm -f ./$(DEPDIR)/Dialog_Rescue_Data.Po
	-rm -f ./$(DEPDIR)/DrawingAreaVisualDisk.Po
	-rm -f ./$(DEPDIR)/FS_Info.Po
	-rm -f ./$(DEPDIR)/FileSystem.Po
	-rm -f ./$(DEPDIR)/Frame_Resizer_Base.Po
	-rm -f ./$(DEPDIR)/Frame_Resizer_Extended.Po
	-rm -f ./$(DEPDIR)/GParted_Core.Po
	-rm -f ./$(DEPDIR)/HBoxOperations.Po
	-rm -f ./$(DEPDIR)/LUKS_Info.Po
	-rm -f ./$(DEPDIR)/LVM2_PV_Info.Po
	-rm -f ./$(DEPDIR)/MenuHelpers.Po
	-rm -f ./$(DEPDIR)/Mount_Info.Po
	-rm -f ./$(DEPDIR)/Operation.Po
	-rm -f ./$(DEPDIR)/OperationChangeUUID.Po
	-rm -f ./$(DEPDIR)/OperationCheck.Po
	-rm -f ./$(DEPDIR)/OperationCopy.Po
	-rm -f ./$(DEPDIR)/OperationCreate.Po
	-rm -f ./$(DEPDIR)/OperationDelete.Po
	-rm -f ./$(DEPDIR)/OperationDetail.Po
	-rm -f ./$(DEPDIR)/OperationFormat.Po
	-rm -f ./$(DEPDIR)/OperationLabelFileSystem.Po
	-rm -f ./$(DEPDIR)/OperationNamePartition.Po
	-rm -f ./$(DEPDIR)/OperationResizeMove.Po
	-rm -f ./$(DEPDIR)/OptionComboBox.Po
	-rm -f ./$(DEPDIR)/Partition.Po
	-rm -f ./$(DEPDIR)/PartitionLUKS.Po
	-rm -f ./$(DEPDIR)/PartitionVector.Po
	-rm -f ./$(DEPDIR)/PasswordRAMStore.Po
	-rm -f ./$(DEPDIR)/PipeCapture.Po
	-rm -f ./$(DEPDIR)/Proc_Partitions_Info.Po
	-rm -f ./$(DEPDIR)/ProgressBar.Po
	-rm -f ./$(DEPDIR)/SWRaid_Info.Po
	-rm -f ./$(DEPDIR)/SupportedFileSystems.Po
	-rm -f ./$(DEPDIR)/TreeView_Detail.Po
	-rm -f ./$(DEPDIR)/Utils.Po
	-rm -f ./$(DEPDIR)/Win_GParted.Po
	-rm -f ./$(DEPDIR)/btrfs.Po
	-rm -f ./$(DEPDIR)/exfat.Po
	-rm -f ./$(DEPDIR)/ext2.Po
	-rm -f ./$(DEPDIR)/f2fs.Po
	-rm -f ./$(DEPDIR)/fat16.Po
	-rm -f ./$(DEPDIR)/hfs.Po
	-rm -f ./$(DEPDIR)/hfsplus.Po
	-rm -f ./$(DEPDIR)/jfs.Po
	-rm -f ./$(DEPDIR)/linux_swap.Po
	-rm -f ./$(DEPDIR)/luks.Po
	-rm -f ./$(DEPDIR)/lvm2_pv.Po
	-rm -f ./$(DEPDIR)/main.Po
	-rm -f ./$(DEPDIR)/minix.Po
	-rm -f ./$(DEPDIR)/nilfs2.Po
	-rm -f ./$(DEPDIR)/ntfs.Po
	-rm -f ./$(DEPDIR)/reiser4.Po
	-rm -f ./$(DEPDIR)/reiserfs.Po
	-rm -f ./$(DEPDIR)/udf.Po
	-rm -f ./$(DEPDIR)/xfs.Po
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-libexecPROGRAMS

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
		-rm -f ./$(DEPDIR)/BCache_Info.Po
	-rm -f ./$(DEPDIR)/BlockSpecial.Po
	-rm -f ./$(DEPDIR)/CopyBlocks.Po
	-rm -f ./$(DEPDIR)/DMRaid.Po
	-rm -f ./$(DEPDIR)/Device.Po
	-rm -f ./$(DEPDIR)/DialogFeatures.Po
	-rm -f ./$(DEPDIR)/DialogManageFlags.Po
	-rm -f ./$(DEPDIR)/DialogPasswordEntry.Po
	-rm -f ./$(DEPDIR)/Dialog_Base_Partition.Po
	-rm -f ./$(DEPDIR)/Dialog_Disklabel.Po
	-rm -f ./$(DEPDIR)/Dialog_FileSystem_Label.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Copy.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Info.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Name.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_New.Po
	-rm -f ./$(DEPDIR)/Dialog_Partition_Resize_Move.Po
	-rm -f ./$(DEPDIR)/Dialog_Progress.Po
	-rm -f ./$(DEPDIR)/Dialog_Rescue_Data.Po
	-rm -f ./$(DEPDIR)/DrawingAreaVisualDisk.Po
	-rm -f ./$(DEPDIR)/FS_Info.Po
	-rm -f ./$(DEPDIR)/FileSystem.Po
	-rm -f ./$(DEPDIR)/Frame_Resizer_Base.Po
	-rm -f ./$(DEPDIR)/Frame_Resizer_Extended.Po
	-rm -f ./$(DEPDIR)/GParted_Core.Po
	-rm -f ./$(DEPDIR)/HBoxOperations.Po
	-rm -f ./$(DEPDIR)/LUKS_Info.Po
	-rm -f ./$(DEPDIR)/LVM2_PV_Info.Po
	-rm -f ./$(DEPDIR)/MenuHelpers.Po
	-rm -f ./$(DEPDIR)/Mount_Info.Po
	-rm -f ./$(DEPDIR)/Operation.Po
	-rm -f ./$(DEPDIR)/OperationChangeUUID.Po
	-rm -f ./$(DEPDIR)/OperationCheck.Po
	-rm -f ./$(DEPDIR)/OperationCopy.Po
	-rm -f ./$(DEPDIR)/OperationCreate.Po
	-rm -f ./$(DEPDIR)/OperationDelete.Po
	-rm -f ./$(DEPDIR)/OperationDetail.Po
	-rm -f ./$(DEPDIR)/OperationFormat.Po
	-rm -f ./$(DEPDIR)/OperationLabelFileSystem.Po
	-rm -f ./$(DEPDIR)/OperationNamePartition.Po
	-rm -f ./$(DEPDIR)/OperationResizeMove.Po
	-rm -f ./$(DEPDIR)/OptionComboBox.Po
	-rm -f ./$(DEPDIR)/Partition.Po
	-rm -f ./$(DEPDIR)/PartitionLUKS.Po
	-rm -f ./$(DEPDIR)/PartitionVector.Po
	-rm -f ./$(DEPDIR)/PasswordRAMStore.Po
	-rm -f ./$(DEPDIR)/PipeCapture.Po
	-rm -f ./$(DEPDIR)/Proc_Partitions_Info.Po
	-rm -f ./$(DEPDIR)/ProgressBar.Po
	-rm -f ./$(DEPDIR)/SWRaid_Info.Po
	-rm -f ./$(DEPDIR)/SupportedFileSystems.Po
	-rm -f ./$(DEPDIR)/TreeView_Detail.Po
	-rm -f ./$(DEPDIR)/Utils.Po
	-rm -f ./$(DEPDIR)/Win_GParted.Po
	-rm -f ./$(DEPDIR)/btrfs.Po
	-rm -f ./$(DEPDIR)/exfat.Po
	-rm -f ./$(DEPDIR)/ext2.Po
	-rm -f ./$(DEPDIR)/f2fs.Po
	-rm -f ./$(DEPDIR)/fat16.Po
	-rm -f ./$(DEPDIR)/hfs.Po
	-rm -f ./$(DEPDIR)/hfsplus.Po
	-rm -f ./$(DEPDIR)/jfs.Po
	-rm -f ./$(DEPDIR)/linux_swap.Po
	-rm -f ./$(DEPDIR)/luks.Po
	-rm -f ./$(DEPDIR)/lvm2_pv.Po
	-rm -f ./$(DEPDIR)/main.Po
	-rm -f ./$(DEPDIR)/minix.Po
	-rm -f ./$(DEPDIR)/nilfs2.Po
	-rm -f ./$(DEPDIR)/ntfs.Po
	-rm -f ./$(DEPDIR)/reiser4.Po
	-rm -f ./$(DEPDIR)/reiserfs.Po
	-rm -f ./$(DEPDIR)/udf.Po
	-rm -f ./$(DEPDIR)/xfs.Po
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-libexecPROGRAMS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am am--depfiles check check-am clean \
	clean-generic clean-libexecPROGRAMS clean-libtool \
	cscopelist-am ctags ctags-am distclean distclean-compile \
	distclean-generic distclean-libtool distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-info install-info-am install-libexecPROGRAMS \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool pdf pdf-am ps ps-am tags tags-am uninstall \
	uninstall-am uninstall-libexecPROGRAMS

.PRECIOUS: Makefile


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
