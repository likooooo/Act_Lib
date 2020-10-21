#include "MX_ClockData.h"

int ClockData::GetClockData(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.GetClockData(lpsYear,lpsMonth,lpsDay,lpsDayOfWeek,lpsHour,lpsMinute,lpsSecond);
}
int ClockData::SetClockData(MX_CommunicationHandle m_ProgType)
{
    return m_ProgType.m_ProgType.SetClockData(lpsYear,lpsMonth,lpsDay,lpsDayOfWeek,lpsHour,lpsMinute,lpsSecond);
}
