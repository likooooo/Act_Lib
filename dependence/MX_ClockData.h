#ifndef MX_CLOCKDATA_H
#define MX_CLOCKDATA_H

#include "MX_CommunicationHandle.h"

struct ClockData
{
    int& lpsYear;
    int& lpsMonth;
    int& lpsDay;
    int& lpsDayOfWeek;
    int& lpsHour;
    int& lpsMinute;
    int& lpsSecond;

    int GetClockData(MX_CommunicationHandle m_ProgType);
    int SetClockData(MX_CommunicationHandle m_ProgType);
};


#endif // MX_CLOCKDATA_H
