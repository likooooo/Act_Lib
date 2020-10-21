#ifndef MX_CommunicationHandle_H
#define MX_CommunicationHandle_H

#include <QString>
#include "actutltypelib.h"
#include "actprogtypelib.h"

using namespace ActUtlTypeLib;
using namespace ActProgTypeLib;

class MX_CommunicationHandle
{
private:
    bool connectStatus;
    int SetConnectStatus(bool val);
public:
    ActProgTypeLib::ActProgType m_ProgType;
    MX_CommunicationHandle();
    int Open();
    int Close();
};

#endif // MX_CommunicationHandle_H
