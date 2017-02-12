#############################################################################
# Makefile for building: RainSystem
# Generated by qmake (3.0) (Qt 5.4.1)
# Project:  RainSystem.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt5/bin/qmake -o Makefile RainSystem.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT5BUILD -DQT5BUILD -DNGL_DEBUG -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT -fPIE $(DEFINES)
CXXFLAGS      = -m64 -pipe -msse -msse2 -msse3 -march=native -march=native -O2 -std=c++0x -Wall -W -Wno-unused-parameter -D_REENTRANT -fPIE $(DEFINES)
INCPATH       = -I. -Iinclude -I/home/joshua/NGL/include -isystem /usr/include/x86_64-linux-gnu/qt5 -isystem /usr/include/x86_64-linux-gnu/qt5/QtOpenGL -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore -Imoc -I. -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64
QMAKE         = /usr/lib/x86_64-linux-gnu/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = RainSystem1.0.0
DISTDIR = /home/joshua/Documents/Specialist/obj/RainSystem1.0.0
LINK          = g++
LFLAGS        = -m64 -Wl,-O1 -Wl,-rpath,/home/joshua/Documents/Specialist/L/home/joshua/NGL/lib -Wl,-rpath,/home/joshua/NGL/lib
LIBS          = $(SUBLIBS) -L/usr/X11R6/lib64 -L/usr/local/lib -L/home/joshua/NGL/lib -l NGL -ltiff -lQt5OpenGL -lQt5Widgets -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = obj/

####### Files

SOURCES       = src/main.cpp \
		src/MainWindow.cpp \
		src/NGLScene.cpp \
		src/planeobj.cpp \
		src/RainCloud.cpp \
		src/RainDrop.cpp moc/moc_MainWindow.cpp \
		moc/moc_NGLScene.cpp
OBJECTS       = obj/main.o \
		obj/MainWindow.o \
		obj/NGLScene.o \
		obj/planeobj.o \
		obj/RainCloud.o \
		obj/RainDrop.o \
		obj/moc_MainWindow.o \
		obj/moc_NGLScene.o
DIST          = RainSystem.pro include/MainWindow.h \
		include/NGLScene.h \
		include/planeobj.h \
		include/RainCloud.h \
		include/RainDrop.h src/main.cpp \
		src/MainWindow.cpp \
		src/NGLScene.cpp \
		src/planeobj.cpp \
		src/RainCloud.cpp \
		src/RainDrop.cpp
QMAKE_TARGET  = RainSystem
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = RainSystem


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

$(TARGET): ui_MainWindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: RainSystem.pro .qmake.cache /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/shell-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		.qmake.cache \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/home/joshua/NGL/UseNGL.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/c++11.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		RainSystem.pro \
		/usr/lib/x86_64-linux-gnu/libQt5OpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Core.prl
	$(QMAKE) -o Makefile RainSystem.pro
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/shell-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
.qmake.cache:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/home/joshua/NGL/UseNGL.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/c++11.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
RainSystem.pro:
/usr/lib/x86_64-linux-gnu/libQt5OpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt5Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile RainSystem.pro

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents include/MainWindow.h include/NGLScene.h include/planeobj.h include/RainCloud.h include/RainDrop.h $(DISTDIR)/
	$(COPY_FILE) --parents src/main.cpp src/MainWindow.cpp src/NGLScene.cpp src/planeobj.cpp src/RainCloud.cpp src/RainDrop.cpp $(DISTDIR)/
	$(COPY_FILE) --parents ui/MainWindow.ui $(DISTDIR)/


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc/moc_MainWindow.cpp moc/moc_NGLScene.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc/moc_MainWindow.cpp moc/moc_NGLScene.cpp
moc/moc_MainWindow.cpp: include/NGLScene.h \
		/home/joshua/NGL/include/ngl/Camera.h \
		/home/joshua/NGL/include/ngl/Types.h \
		/home/joshua/NGL/include/ngl/glew.h \
		/home/joshua/NGL/include/ngl/Vec4.h \
		/home/joshua/NGL/include/ngl/Vec2.h \
		/home/joshua/NGL/include/ngl/Vec3.h \
		/home/joshua/NGL/include/ngl/Mat4.h \
		/home/joshua/NGL/include/ngl/RibExport.h \
		/home/joshua/NGL/include/ngl/Plane.h \
		/home/joshua/NGL/include/ngl/AABB.h \
		/home/joshua/NGL/include/ngl/BBox.h \
		/home/joshua/NGL/include/ngl/AbstractVAO.h \
		/home/joshua/NGL/include/ngl/Colour.h \
		/home/joshua/NGL/include/ngl/Light.h \
		/home/joshua/NGL/include/ngl/Text.h \
		/home/joshua/NGL/include/ngl/VAOFactory.h \
		/home/joshua/NGL/include/ngl/SimpleVAO.h \
		include/RainCloud.h \
		include/RainDrop.h \
		include/planeobj.h \
		include/MainWindow.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/joshua/Documents/Specialist -I/home/joshua/Documents/Specialist/include -I/home/joshua/NGL/include -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/4.9 -I/usr/include/x86_64-linux-gnu/c++/4.9 -I/usr/include/c++/4.9/backward -I/usr/lib/gcc/x86_64-linux-gnu/4.9/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include include/MainWindow.h -o moc/moc_MainWindow.cpp

moc/moc_NGLScene.cpp: /home/joshua/NGL/include/ngl/Camera.h \
		/home/joshua/NGL/include/ngl/Types.h \
		/home/joshua/NGL/include/ngl/glew.h \
		/home/joshua/NGL/include/ngl/Vec4.h \
		/home/joshua/NGL/include/ngl/Vec2.h \
		/home/joshua/NGL/include/ngl/Vec3.h \
		/home/joshua/NGL/include/ngl/Mat4.h \
		/home/joshua/NGL/include/ngl/RibExport.h \
		/home/joshua/NGL/include/ngl/Plane.h \
		/home/joshua/NGL/include/ngl/AABB.h \
		/home/joshua/NGL/include/ngl/BBox.h \
		/home/joshua/NGL/include/ngl/AbstractVAO.h \
		/home/joshua/NGL/include/ngl/Colour.h \
		/home/joshua/NGL/include/ngl/Light.h \
		/home/joshua/NGL/include/ngl/Text.h \
		/home/joshua/NGL/include/ngl/VAOFactory.h \
		/home/joshua/NGL/include/ngl/SimpleVAO.h \
		include/RainCloud.h \
		include/RainDrop.h \
		include/planeobj.h \
		include/NGLScene.h
	/usr/lib/x86_64-linux-gnu/qt5/bin/moc $(DEFINES) -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++-64 -I/home/joshua/Documents/Specialist -I/home/joshua/Documents/Specialist/include -I/home/joshua/NGL/include -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/4.9 -I/usr/include/x86_64-linux-gnu/c++/4.9 -I/usr/include/c++/4.9/backward -I/usr/lib/gcc/x86_64-linux-gnu/4.9/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/4.9/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include include/NGLScene.h -o moc/moc_NGLScene.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_MainWindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_MainWindow.h
ui_MainWindow.h: ui/MainWindow.ui
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic ui/MainWindow.ui -o ui_MainWindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

obj/main.o: src/main.cpp include/NGLScene.h \
		/home/joshua/NGL/include/ngl/Camera.h \
		/home/joshua/NGL/include/ngl/Types.h \
		/home/joshua/NGL/include/ngl/glew.h \
		/home/joshua/NGL/include/ngl/Vec4.h \
		/home/joshua/NGL/include/ngl/Vec2.h \
		/home/joshua/NGL/include/ngl/Vec3.h \
		/home/joshua/NGL/include/ngl/Mat4.h \
		/home/joshua/NGL/include/ngl/RibExport.h \
		/home/joshua/NGL/include/ngl/Plane.h \
		/home/joshua/NGL/include/ngl/AABB.h \
		/home/joshua/NGL/include/ngl/BBox.h \
		/home/joshua/NGL/include/ngl/AbstractVAO.h \
		/home/joshua/NGL/include/ngl/Colour.h \
		/home/joshua/NGL/include/ngl/Light.h \
		/home/joshua/NGL/include/ngl/Text.h \
		/home/joshua/NGL/include/ngl/VAOFactory.h \
		/home/joshua/NGL/include/ngl/SimpleVAO.h \
		include/RainCloud.h \
		include/RainDrop.h \
		include/planeobj.h \
		include/MainWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/main.o src/main.cpp

obj/MainWindow.o: src/MainWindow.cpp include/MainWindow.h \
		include/NGLScene.h \
		/home/joshua/NGL/include/ngl/Camera.h \
		/home/joshua/NGL/include/ngl/Types.h \
		/home/joshua/NGL/include/ngl/glew.h \
		/home/joshua/NGL/include/ngl/Vec4.h \
		/home/joshua/NGL/include/ngl/Vec2.h \
		/home/joshua/NGL/include/ngl/Vec3.h \
		/home/joshua/NGL/include/ngl/Mat4.h \
		/home/joshua/NGL/include/ngl/RibExport.h \
		/home/joshua/NGL/include/ngl/Plane.h \
		/home/joshua/NGL/include/ngl/AABB.h \
		/home/joshua/NGL/include/ngl/BBox.h \
		/home/joshua/NGL/include/ngl/AbstractVAO.h \
		/home/joshua/NGL/include/ngl/Colour.h \
		/home/joshua/NGL/include/ngl/Light.h \
		/home/joshua/NGL/include/ngl/Text.h \
		/home/joshua/NGL/include/ngl/VAOFactory.h \
		/home/joshua/NGL/include/ngl/SimpleVAO.h \
		include/RainCloud.h \
		include/RainDrop.h \
		include/planeobj.h \
		ui_MainWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/MainWindow.o src/MainWindow.cpp

obj/NGLScene.o: src/NGLScene.cpp include/NGLScene.h \
		/home/joshua/NGL/include/ngl/Camera.h \
		/home/joshua/NGL/include/ngl/Types.h \
		/home/joshua/NGL/include/ngl/glew.h \
		/home/joshua/NGL/include/ngl/Vec4.h \
		/home/joshua/NGL/include/ngl/Vec2.h \
		/home/joshua/NGL/include/ngl/Vec3.h \
		/home/joshua/NGL/include/ngl/Mat4.h \
		/home/joshua/NGL/include/ngl/RibExport.h \
		/home/joshua/NGL/include/ngl/Plane.h \
		/home/joshua/NGL/include/ngl/AABB.h \
		/home/joshua/NGL/include/ngl/BBox.h \
		/home/joshua/NGL/include/ngl/AbstractVAO.h \
		/home/joshua/NGL/include/ngl/Colour.h \
		/home/joshua/NGL/include/ngl/Light.h \
		/home/joshua/NGL/include/ngl/Text.h \
		/home/joshua/NGL/include/ngl/VAOFactory.h \
		/home/joshua/NGL/include/ngl/SimpleVAO.h \
		include/RainCloud.h \
		include/RainDrop.h \
		include/planeobj.h \
		/home/joshua/NGL/include/ngl/Transformation.h \
		/home/joshua/NGL/include/ngl/NGLassert.h \
		/home/joshua/NGL/include/ngl/Material.h \
		/home/joshua/NGL/include/ngl/NGLInit.h \
		/home/joshua/NGL/include/ngl/Singleton.h \
		/home/joshua/NGL/include/ngl/VAOPrimitives.h \
		/home/joshua/NGL/include/ngl/Random.h \
		/home/joshua/NGL/include/ngl/ShaderLib.h \
		/home/joshua/NGL/include/ngl/Shader.h \
		/home/joshua/NGL/include/ngl/ShaderProgram.h \
		/home/joshua/NGL/include/ngl/Util.h \
		/home/joshua/NGL/include/ngl/Mat3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/NGLScene.o src/NGLScene.cpp

obj/planeobj.o: src/planeobj.cpp include/planeobj.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/planeobj.o src/planeobj.cpp

obj/RainCloud.o: src/RainCloud.cpp include/RainCloud.h \
		include/RainDrop.h \
		include/planeobj.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/RainCloud.o src/RainCloud.cpp

obj/RainDrop.o: src/RainDrop.cpp include/RainDrop.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/RainDrop.o src/RainDrop.cpp

obj/moc_MainWindow.o: moc/moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_MainWindow.o moc/moc_MainWindow.cpp

obj/moc_NGLScene.o: moc/moc_NGLScene.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_NGLScene.o moc/moc_NGLScene.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

