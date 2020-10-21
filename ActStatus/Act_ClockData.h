#ifndef ACT_CLOCKDATA_H
#define ACT_CLOCKDATA_H

#include "../Act_Lib.h"

class I_Act_ClockData
{
protected:
    I_Act_ClockData();
public:
    Act_Lib* lib;
    int lpsYear;
    int lpsMonth;
    int lpsDay;
    int lpsDayOfWeek;
    int lpsHour;
    int lpsMinute;
    int lpsSecond;
    I_Act_ClockData(Act_Lib* lib);
    friend int GetClockData(I_Act_ClockData*);
    friend int SetClockData(I_Act_ClockData*);
};
#endif // ACT_CLOCKDATA_H
