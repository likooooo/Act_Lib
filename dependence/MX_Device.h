#ifndef MX_DEVICE_H
#define MX_DEVICE_H

#include "MX_CommunicationHandle.h"

//Device,Device2
struct MX_Device
{
public:
    const QString& szDevice;
    int lData;

    int GetDevice(MX_CommunicationHandle m_ProgType);
    int SetDevice(MX_CommunicationHandle m_ProgType);
};

#endif // MX_DEVICE_H
