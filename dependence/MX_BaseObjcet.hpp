#ifndef MX_BASEOBJECT_H
#define MX_BASEOBJECT_H

#include <QString>
#include "actutltypelib.h"
#include "actprogtypelib.h"

using namespace ActUtlTypeLib;
using namespace ActProgTypeLib;

class MX_CommunicationHandle
{
private:
    bool connectStatus;
    int SetConnectStatus(bool val)
    {
        if(val == connectStatus) return true;
        connectStatus = val;
        return connectStatus?m_ProgType.Open():m_ProgType.close();
    }
public:
    ActProgType m_ProgType;
    MX_CommunicationHandle()
    {
        connectStatus = false;
    }

    int Open()
    {
        return SetConnectStatus(true);
    }
    int Close()
    {
        return SetConnectStatus(false);
    }
};

//Device,Device2
struct Device
{
    const QString& szDevice;
    int lData;

    int GetDevice(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.GetDevice(szDevice,lData);
    }
    int SetDevice(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.SetDevice(szDevice,lData);
    }
};

struct DeviceStatus
{
    //软件元列表
    const QString& szDeviceList;
    int lSize;
    int lMonitorCycle;
    int& lplData;

    int EntryDeviceStatus(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.EntryDeviceStatus(szDeviceList,lSize,lMonitorCycle,lplData);
    }
    int FreeDeviceStatus(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.FreeDeviceStatus();
    }
};

//DeviceBlock,DeviceRandom,DeviceBlock2,DeviceRandom
struct DeviceMemory
{
    const QString& szDevice;
    int lSize;
    int& lplData;

    int ReadDeviceBlock(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.ReadDeviceBlock(szDevice,lSize,lplData);
    }

    int WriteDeviceBlock(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.ReadDeviceBlock(szDevice,lSize,lplData);
    }

    int ReadDeviceRandom(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.ReadDeviceRandom(szDevice,lSize,lplData);
    }

    int WriteDeviceRandom(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.WriteDeviceRandom(szDevice,lSize,lplData);
    }

    int ReadDeviceBlock2(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.ReadDeviceBlock2(szDevice,lSize,lplData);
    }

    int WriteDeviceBlock2(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.WriteDeviceBlock2(szDevice,lSize,lplData);
    }

    int ReadDeviceRandom2(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.ReadDeviceRandom2(szDevice,lSize,lplData);
    }
    int WriteDeviceRandom2(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.WriteDeviceRandom2(szDevice,lSize,lplData);
    }
};

struct Buffer
{
    int lStartIO;
    int lAddress;
    int lSize;
    int& lpsData;

    int ReadBuffer(MX_CommunicationHandle m_ProgType)
    {
        this->lpsData = 9;
        return m_ProgType.m_ProgType.ReadBuffer(lStartIO,lAddress,lSize,lpsData);
    }
    int WriteBuffer(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.WriteBuffer(lStartIO,lAddress,lSize,lpsData);
    }
};

struct ClockData
{
    int& lpsYear;
    int& lpsMonth;
    int& lpsDay;
    int& lpsDayOfWeek;
    int& lpsHour;
    int& lpsMinute;
    int& lpsSecond;

    int GetClockData(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.GetClockData(lpsYear,lpsMonth,lpsDay,lpsDayOfWeek,lpsHour,lpsMinute,lpsSecond);
    }
    int SetClockData(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.SetClockData(lpsYear,lpsMonth,lpsDay,lpsDayOfWeek,lpsHour,lpsMinute,lpsSecond);
    }
};

struct CpuType
{
public:
    QString szCpuName;
    int lCpuType;

    int GetCpuType(MX_CommunicationHandle m_ProgType)
    {
        return m_ProgType.m_ProgType.GetCpuType(szCpuName,lCpuType);
    }
};


//class MX_Controller
//{
//private:
//    bool connectStatus;
//    int SetConnectStatus(bool val);
//    bool runTaskStatus;
//    int SetRunTaskStatus(bool val);
//public:
//    ActUtlType m_UtlType;
//    ActProgType m_ProgType;
//    MX_Controller();
//    int Open();
//    int Close();
//    int ReadDeviceBlock(const QString& szDevice, int lSize, int& lplData);
//    int WriteDeviceBlock(const QString& szDevice, int lSize, int& lplData);
//    int ReadDeviceRandom(const QString& szDeviceList, int lSize, int& lplData);
//    int WriteDeviceRandom(const QString& szDeviceList, int lSize, int& lplData);
//    int SetDevice(const QString& szDevice, int lData);
//    int GetDevice(const QString& szDevice, int& lplData);
//    int ReadBuffer(int lStartIO, int lAddress, int lSize, int& lpsData);
//    int WriteBuffer(int lStartIO, int lAddress, int lSize, int& lpsData);
//    int GetClockData(int& lpsYear, int& lpsMonth, int& lpsDay, int& lpsDayOfWeek, int& lpsHour, int& lpsMinute, int& lpsSecond);
//    int SetClockData(int& lpsYear, int& lpsMonth, int& lpsDay, int& lpsDayOfWeek, int& lpsHour, int& lpsMinute, int& lpsSecond);
//    int GetCpuType(QString& szCpuName, int& lplCpuCode);
//    int SetCpuStatus(int lOperation);
//    int EntryDeviceStatus(const QString& szDeviceList, int lSize, int lMonitorCycle, int& lplData);
//    int FreeDeviceStatus();
////    void OnDeviceStatus()
//    int ReadDeviceBlock2(const QString& szDevice, int lSize, int& lpsData);
//    int WriteDeviceBlock2(const QString& szDevice, int lSize, int& lpsData);
//    int ReadDeviceRandom2(const QString& szDeviceList, int lSize, int& lpsData);
//    int WriteDeviceRandom2(const QString& szDeviceList, int lSize, int& lpsData);
//    int SetDevice2(const QString& szDevice, int lData);
//    int GetDevice2(const QString& szDevice, int& lplData);
//    int Connect();
//    int Disconnect();
//    int GetErrorMessage();
////    CpuType GetCpuType();
////    bool Run();
////    bool Stop();
////    int SetValue(QString deviceName,int lData);
//};

#endif // MX_CONTROLLER_H
