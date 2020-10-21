#ifndef ACT_LIB_H
#define ACT_LIB_H

#include "Act_Lib_global.h"
#include "dependence/actutltypelib.h"
#include "dependence/actprogtypelib.h"

#define DLLFLAG __declspec(dllexport)

using namespace ActUtlTypeLib;
using namespace ActProgTypeLib;

#include "ActStatus/Act_ClockData.h"
#include "ActStatus/Act_ConnectStatus.h"
#include "ActStatus/Act_CpuType.h"

//所有操作的实现
class Act_Lib:I_Act_ClockData,I_Act_ConnectStatus,I_Act_CpuType
{
:
    ActUtlTypeLib::ActUtlType instance;
public:
    Act_Lib();
    int GetClockData() override;
    int SetClockData() override;
    int Connect()override;
    int DisConnect()override;
    int RemoteRun()override;
    int RemoteStop()override;
    int RemotePause()override;
    int GetCpuType()override;
};

#endif // ACT_LIB_H
