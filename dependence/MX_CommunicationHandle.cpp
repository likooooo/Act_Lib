#include "MX_CommunicationHandle.h"

int MX_CommunicationHandle::SetConnectStatus(bool val)
{
    if(val == connectStatus) return true;
    connectStatus = val;
    return connectStatus?m_ProgType.Open():m_ProgType.close();
}

MX_CommunicationHandle::MX_CommunicationHandle()
{
    connectStatus = false;
}

int MX_CommunicationHandle::Open()
{
    return SetConnectStatus(true);
}
int MX_CommunicationHandle::Close()
{
    return SetConnectStatus(false);
}
