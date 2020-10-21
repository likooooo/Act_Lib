#ifndef ACTCONFIG_H
#define ACTCONFIG_H

#include <QMap>

#include "../dependence/actutltypelib.h"
#include "../dependence/actprogtypelib.h"

using namespace ActUtlTypeLib;
using namespace ActProgTypeLib;



class ActConnect:ActLibInstance
{
protected:
    bool isConnect;
    int SetConnectStatus(bool status);
public:
    ActConnect();
    int Connect();
    int Disconnect();
};

class Act_DeviceMap:ActLibInstance
{
protected:
    bool isConnect;
    QMap<QString,int> deviceMap;
    virtual void InitDeviceMap();
public:
    Act_DeviceMap();
    int GetDevicePtr();
    int AddDevice(QString name,int ptr);
};
#endif // ACTCONFIG_H
