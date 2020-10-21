#ifndef ACT_PLC_BASE_H
#define ACT_PLC_BASE_H

#include <Act_Lib.h>

class DLLFLAG Act_PLC_Base:Act_Lib
{
public:
    Act_PLC_Base();
    virtual ~Act_PLC_Base();
    virtual int Connect();
    virtual int DisConnect();

    virtual int Read();
    virtual int Write();
};

#endif // ACT_PLC_BASE_H
