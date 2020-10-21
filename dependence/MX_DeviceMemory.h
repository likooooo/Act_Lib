#ifndef MX_DEVICEMEMORY_H
#define MX_DEVICEMEMORY_H

#include "MX_CommunicationHandle.h"

//DeviceBlock,DeviceRandom,DeviceBlock2,DeviceRandom
struct DeviceMemory
{
    const QString& szDevice;
    int lSize;
    int& lplData;

    int ReadDeviceBlock(MX_CommunicationHandle m_ProgType);
    int WriteDeviceBlock(MX_CommunicationHandle m_ProgType);

    int ReadDeviceRandom(MX_CommunicationHandle m_ProgType);
    int WriteDeviceRandom(MX_CommunicationHandle m_ProgType);

    int ReadDeviceBlock2(MX_CommunicationHandle m_ProgType);
    int WriteDeviceBlock2(MX_CommunicationHandle m_ProgType);

    int ReadDeviceRandom2(MX_CommunicationHandle m_ProgType);
    int WriteDeviceRandom2(MX_CommunicationHandle m_ProgType);
};

#endif // MX_DEVICEMEMORY_H
