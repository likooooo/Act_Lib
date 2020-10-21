#ifndef MX_CPUTYPE_H
#define MX_CPUTYPE_H

#include "MX_CommunicationHandle.h"

struct MX_CpuType
{
public:
    QString szCpuName;
    int lCpuType;
    MX_CpuType();
    int GetCpuType(MX_CommunicationHandle* m_ProgType);
};

#endif // MX_CPUTYPE_H
