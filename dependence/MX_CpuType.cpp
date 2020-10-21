#include "MX_CpuType.h"

MX_CpuType::MX_CpuType()
{
    szCpuName = "";
//    lCpuType = -1;
}

int MX_CpuType::GetCpuType(MX_CommunicationHandle* m_ProgType)
{
//    qDebug(qPrintable(QString::number(lCpuType)));
    return m_ProgType->m_ProgType.GetCpuType(szCpuName,lCpuType);
}
