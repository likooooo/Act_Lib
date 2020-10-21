#include "MX_Buffer.h"

int Buffer::ReadBuffer(MX_CommunicationHandle m_ProgType)
{
    this->lpsData = 9;
    return m_ProgType.m_ProgType.ReadBuffer(lStartIO,lAddress,lSize,lpsData);
}
int Buffer::WriteBuffer(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.WriteBuffer(lStartIO,lAddress,lSize,lpsData);
}
