QT -= gui
QT += axcontainer
TEMPLATE = lib
DEFINES += ACT_LIB_LIBRARY

CONFIG += c++11
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ActStatus/Act_ClockData.cpp \
    ActStatus/Act_ConnectStatus.cpp \
    ActStatus/Act_CpuType.cpp \
    Act_Lib.cpp \
    Act_PLC_Base.cpp \
#    PLC_Object/Act_Buffer.cpp \
#    PLC_Object/Act_ClockData.cpp \
#    PLC_Object/Act_ConnectStatus.cpp \
#    PLC_Object/Act_CpuType.cpp \
#    PLC_Object/Act_Device.cpp \
#    PLC_Object/Act_DeviceBlock.cpp \
#    PLC_Object/PLC_Type.cpp \
#    dependence/MX_Buffer.cpp \
#    dependence/MX_ClockData.cpp \
#    dependence/MX_CommunicationHandle.cpp \
#    dependence/MX_CpuType.cpp \
#    dependence/MX_Device.cpp \
#    dependence/MX_DeviceMemory.cpp \
#    dependence/MX_DeviceStatus.cpp \
    DataConvertHelper.cpp \
    dependence/actprogtypelib.cpp \
    dependence/actsupportmsglib.cpp \
    dependence/actutltypelib.cpp

HEADERS += \
    ActStatus/Act_ClockData.h \
    ActStatus/Act_ConnectStatus.h \
    ActStatus/Act_CpuType.h \
    Act_Lib_global.h \
    Act_Lib.h \
    Act_PLC_Base.h \
#    PLC_Object/Act_Buffer.h \
#    PLC_Object/Act_ClockData.h \
#    PLC_Object/Act_ConnectStatus.h \
#    PLC_Object/Act_CpuType.h \
#    PLC_Object/Act_Device.h \
#    PLC_Object/Act_DeviceBlock.h \
#    PLC_Object/PLC_Type.h \
#    dependence/MX_BaseObjcet.hpp \
#    dependence/MX_Buffer.h \
#    dependence/MX_ClockData.h \
#    dependence/MX_CommunicationHandle.h \
#    dependence/MX_CpuType.h \
#    dependence/MX_Device.h \
#    dependence/MX_DeviceMemory.h \
#    dependence/MX_DeviceStatus.h \
    DataConvertHelper.h \
    dependence/actprogtypelib.h \
    dependence/actsupportmsglib.h \
    dependence/actutltypelib.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
