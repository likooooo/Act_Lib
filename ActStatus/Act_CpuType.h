#ifndef ACT_CPUTYPE_H
#define ACT_CPUTYPE_H

#include "../Act_Lib.h"

class I_Act_CpuType
{
protected:
    Act_Lib* lib;
    QString szCpuName;
    int lCpuType;
    I_Act_CpuType();
public:
    I_Act_CpuType(Act_Lib* lib);
    virtual int GetCpuType();
};
#endif // ACT_CPUTYPE_H
