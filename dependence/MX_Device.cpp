#include "MX_Device.h"


int MX_Device::GetDevice(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.GetDevice(szDevice,lData);
}
int MX_Device::SetDevice(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.SetDevice(szDevice,lData);
}
