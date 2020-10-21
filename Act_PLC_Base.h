#ifndef ACT_PLC_BASE_H
#define ACT_PLC_BASE_H

#include"Act_Lib.h"

class Act_PLC_Base
{
protected:
    Act_Lib* lib;
public:
    Act_PLC_Base();
    virtual int Connect();
    virtual int DisConnect();

    virtual int Read(QString );
    virtual int Write();
};

#endif // ACT_PLC_BASE_H
