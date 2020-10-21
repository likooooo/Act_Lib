#include "MX_DeviceStatus.h"

int DeviceStatus::EntryDeviceStatus(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.EntryDeviceStatus(szDeviceList,lSize,lMonitorCycle,lplData);
}
int DeviceStatus::FreeDeviceStatus(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.FreeDeviceStatus();
}
