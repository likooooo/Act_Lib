#include "MX_DeviceMemory.h"


int DeviceMemory::ReadDeviceBlock(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.ReadDeviceBlock(szDevice,lSize,lplData);
}

int  DeviceMemory::WriteDeviceBlock(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.ReadDeviceBlock(szDevice,lSize,lplData);
}

int  DeviceMemory::ReadDeviceRandom(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.ReadDeviceRandom(szDevice,lSize,lplData);
}

int  DeviceMemory::WriteDeviceRandom(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.WriteDeviceRandom(szDevice,lSize,lplData);
}

int  DeviceMemory::ReadDeviceBlock2(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.ReadDeviceBlock2(szDevice,lSize,lplData);
}

int  DeviceMemory::WriteDeviceBlock2(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.WriteDeviceBlock2(szDevice,lSize,lplData);
}

int  DeviceMemory::ReadDeviceRandom2(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.ReadDeviceRandom2(szDevice,lSize,lplData);
}
int  DeviceMemory::WriteDeviceRandom2(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.WriteDeviceRandom2(szDevice,lSize,lplData);
}
