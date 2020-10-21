#ifndef ACT_BUFFER_H
#define ACT_BUFFER_H

#include "../Act_Lib.h"

class Act_Buffer
{
public:

    int lStartIO;
    int lAddress;
    int lSize;
    int& lpsData;

    int ReadBuffer();
    int WriteBuffer();
};

#endif // ACT_BUFFER_H
