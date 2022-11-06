TEMPLATE = app
TARGET = FITSstacker

QT += core gui widgets

Debug:DESTDIR = "$$PWD/bin/Debug/"
else:DESTDIR = "$$PWD/bin/Release/"

INCLUDEPATH += include/

Debug:LIBS += -l"$$PWD\lib\debug\CCfits" \
              -l"$$PWD\lib\debug\cfitsio"
else:LIBS += -l"$$PWD\lib\release\CCfits" \
             -l"$$PWD\lib\release\cfitsio"

HEADERS += \
    include/GUI/InputWidget.hpp \
    include/GUI/FileDialogWidget.hpp \
    include/GUI/ProcessWidget.hpp \
    include/GUI/Window.hpp \
    include/CCfits/AsciiTable.h \
    include/CCfits/BinTable.h \
    include/CCfits/CCfits \
    include/CCfits/CCfits.h \
    include/CCfits/Column.h \
    include/CCfits/ColumnCreator.h \
    include/CCfits/ColumnData.h \
    include/CCfits/ColumnT.h \
    include/CCfits/ColumnVectorData.h \
    include/CCfits/ExtHDU.h \
    include/CCfits/ExtHDUT.h \
    include/CCfits/FITS.h \
    include/CCfits/FITSUtil.h \
    include/CCfits/FITSUtilT.h \
    include/CCfits/FitsError.h \
    include/CCfits/GroupTable.h \
    include/CCfits/HDU.h \
    include/CCfits/HDUCreator.h \
    include/CCfits/Image.h \
    include/CCfits/ImageExt.h \
    include/CCfits/KeyData.h \
    include/CCfits/Keyword.h \
    include/CCfits/KeywordCreator.h \
    include/CCfits/KeywordT.h \
    include/CCfits/MSconfig.h \
    include/CCfits/NewKeyword.h \
    include/CCfits/PHDU.h \
    include/CCfits/PHDUT.h \
    include/CCfits/PrimaryHDU.h \
    include/CCfits/Table.h \
    include/CCfits/fitsio.h \
    include/CCfits/fitsio2.h \
    include/CCfits/longnam.h \
    include/IutFits.hpp

SOURCES += \
    src/GUI/InputWidget.cpp \
    src/GUI/FileDialogWidget.cpp \
    src/GUI/ProcessWidget.cpp \
    src/GUI/Window.cpp \
    src/IutFits.cpp \
    src/main.cpp
