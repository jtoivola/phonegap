#############################################################################
# Makefile for building: phonegap
# Generated by qmake (2.01a) (Qt 4.5.2) on: Tue Nov 24 18:06:20 2009
# Project:  phonegap.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile phonegap.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtWebKit -I/usr/include/qt4 -I/usr/include/telepathy-1.0/ -I/usr/lib/glib-2.0/include -I/usr/include/dbus-1.0 -I/usr/include/glib-2.0 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtWebKit -lQtGui -lQtCore -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		deviceinfo.cpp \
		webview.cpp \
		debug.cpp \
		accelerometer.cpp \
		notification.cpp moc_commandmanager.cpp \
		moc_deviceinfo.cpp \
		moc_webview.cpp \
		moc_debug.cpp \
		moc_accelerometer.cpp \
		moc_notification.cpp
OBJECTS       = main.o \
		deviceinfo.o \
		webview.o \
		debug.o \
		accelerometer.o \
		notification.o \
		moc_commandmanager.o \
		moc_deviceinfo.o \
		moc_webview.o \
		moc_debug.o \
		moc_accelerometer.o \
		moc_notification.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		phonegap.pro
QMAKE_TARGET  = phonegap
DESTDIR       = 
TARGET        = phonegap

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: phonegap.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtWebKit.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile phonegap.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtWebKit.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile phonegap.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/phonegap1.0.0 || $(MKDIR) .tmp/phonegap1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/phonegap1.0.0/ && $(COPY_FILE) --parents commandmanager.h deviceinfo.h webview.h utils.h debug.h accelerometer.h notification.h .tmp/phonegap1.0.0/ && $(COPY_FILE) --parents main.cpp deviceinfo.cpp webview.cpp debug.cpp accelerometer.cpp notification.cpp .tmp/phonegap1.0.0/ && (cd `dirname .tmp/phonegap1.0.0` && $(TAR) phonegap1.0.0.tar phonegap1.0.0 && $(COMPRESS) phonegap1.0.0.tar) && $(MOVE) `dirname .tmp/phonegap1.0.0`/phonegap1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/phonegap1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_commandmanager.cpp moc_deviceinfo.cpp moc_webview.cpp moc_debug.cpp moc_accelerometer.cpp moc_notification.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_commandmanager.cpp moc_deviceinfo.cpp moc_webview.cpp moc_debug.cpp moc_accelerometer.cpp moc_notification.cpp
moc_commandmanager.cpp: utils.h \
		basecommand.h \
		deviceinfo.h \
		commandmanager.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) commandmanager.h -o moc_commandmanager.cpp

moc_deviceinfo.cpp: deviceinfo.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) deviceinfo.h -o moc_deviceinfo.cpp

moc_webview.cpp: utils.h \
		deviceinfo.h \
		debug.h \
		accelerometer.h \
		notification.h \
		webview.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) webview.h -o moc_webview.cpp

moc_debug.cpp: debug.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) debug.h -o moc_debug.cpp

moc_accelerometer.cpp: accelerometer.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) accelerometer.h -o moc_accelerometer.cpp

moc_notification.cpp: notification.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) notification.h -o moc_notification.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp deviceinfo.h \
		commandmanager.h \
		utils.h \
		basecommand.h \
		webview.h \
		debug.h \
		accelerometer.h \
		notification.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

deviceinfo.o: deviceinfo.cpp deviceinfo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o deviceinfo.o deviceinfo.cpp

webview.o: webview.cpp webview.h \
		utils.h \
		deviceinfo.h \
		debug.h \
		accelerometer.h \
		notification.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o webview.o webview.cpp

debug.o: debug.cpp debug.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o debug.o debug.cpp

accelerometer.o: accelerometer.cpp utils.h \
		accelerometer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o accelerometer.o accelerometer.cpp

notification.o: notification.cpp notification.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o notification.o notification.cpp

moc_commandmanager.o: moc_commandmanager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_commandmanager.o moc_commandmanager.cpp

moc_deviceinfo.o: moc_deviceinfo.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_deviceinfo.o moc_deviceinfo.cpp

moc_webview.o: moc_webview.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_webview.o moc_webview.cpp

moc_debug.o: moc_debug.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_debug.o moc_debug.cpp

moc_accelerometer.o: moc_accelerometer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_accelerometer.o moc_accelerometer.cpp

moc_notification.o: moc_notification.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_notification.o moc_notification.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

