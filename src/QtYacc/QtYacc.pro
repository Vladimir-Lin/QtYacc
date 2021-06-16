NAME         = QtYacc
TARGET       = $${NAME}

QT           = core
QT          -= gui
QT          += network
QT          += sql
QT          += script
QT          += Essentials

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/qtyacc.h

SOURCES     += $${PWD}/nYaccBucket.cpp
SOURCES     += $${PWD}/nYaccCore.cpp
SOURCES     += $${PWD}/nYaccShifts.cpp
SOURCES     += $${PWD}/nYaccReductions.cpp
SOURCES     += $${PWD}/nYaccAction.cpp
SOURCES     += $${PWD}/nYaccParam.cpp
SOURCES     += $${PWD}/nYaccHelp.cpp
SOURCES     += $${PWD}/nYaccOutput.cpp
SOURCES     += $${PWD}/nYacc.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
