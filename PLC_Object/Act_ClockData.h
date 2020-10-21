#ifndef ACT_CLOCKDATA_H
#define ACT_CLOCKDATA_H


class Act_ClockData
{
public:
    int& lpsYear;
    int& lpsMonth;
    int& lpsDay;
    int& lpsDayOfWeek;
    int& lpsHour;
    int& lpsMinute;
    int& lpsSecond;

    int GetClockData();
    int SetClockData();
};

#endif // ACT_CLOCKDATA_H
