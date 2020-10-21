#ifndef ACT_CONNECTSTATUS_H
#define ACT_CONNECTSTATUS_H


class Act_ConnectStatus
{
public:
//    Act_ConnectStatus();
    virtual int Connect();
    virtual int DisConnect();
    virtual int RemoteRun();
    virtual int RemoteStop();
    virtual int RemotePause();
};

#endif // ACT_CONNECTSTATUS_H
