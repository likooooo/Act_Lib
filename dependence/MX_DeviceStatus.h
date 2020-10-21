#ifndef MX_DEVICESTATUS_H
#define MX_DEVICESTATUS_H

#include "MX_CommunicationHandle.h"

struct DeviceStatus
{
    //软件元列表
    const QString& szDeviceList;
    int lSize;
    int lMonitorCycle;
    int& lplData;

    int EntryDeviceStatus(MX_CommunicationHandle m_ProgType);
    int FreeDeviceStatus(MX_CommunicationHandle m_ProgType);
};

#endif // MX_DEVICESTATUS_H
