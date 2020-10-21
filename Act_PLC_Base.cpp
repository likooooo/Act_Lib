#include "Act_PLC_Base.h"

Act_PLC_Base::Act_PLC_Base():Act_Lib()
{

}

Act_PLC_Base::~Act_PLC_Base()
{

}

int Act_PLC_Base::Connect()
{
    return 0;
}

int Act_PLC_Base::DisConnect(){ return 0;}

int Act_PLC_Base::Read(){ return 0;}

int Act_PLC_Base::Write(){ return 0;}
