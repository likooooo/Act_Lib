#ifndef ACT_CONNECTSTATUS_H
#define ACT_CONNECTSTATUS_H

#include "../Act_Lib.h"

class I_Act_ConnectStatus
{
protected:
    Act_Lib* lib;
    bool isConnect;
    virtual int SetConnectStatus(bool status);
    I_Act_ConnectStatus();
public:
    int lpsYear;
    int lpsMonth;
    int lpsDay;
    int lpsDayOfWeek;
    int lpsHour;
    int lpsMinute;
    int lpsSecond;
    I_Act_ConnectStatus(Act_Lib* lib);
    virtual int Connect();
    virtual int DisConnect();
    virtual int RemoteRun();
    virtual int RemoteStop();
    virtual int RemotePause();
};


#endif // ACT_CONNECTSTATUS_H
