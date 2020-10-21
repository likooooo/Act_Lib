#ifndef MX_BUFFER_H
#define MX_BUFFER_H

#include "MX_CommunicationHandle.h"

struct Buffer
{
    int lStartIO;
    int lAddress;
    int lSize;
    int& lpsData;

    int ReadBuffer(MX_CommunicationHandle m_ProgType);
    int WriteBuffer(MX_CommunicationHandle m_ProgType);
};

#endif // MX_BUFFER_H
