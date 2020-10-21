#ifndef ACT_LIB_H
#define ACT_LIB_H

#include "Act_Lib_global.h"


#include "dependence/actutltypelib.h"
#include "dependence/actprogtypelib.h"

#define UsedLib ActUtlTypeLib::ActUtlType

using namespace ActUtlTypeLib;
using namespace ActProgTypeLib;

class Act_Lib
{
public:
    //ActProgTypeLib::ActProgType instance;
    UsedLib* GetLibPtr();
    UsedLib instance;
};

Act_Lib* act;
UsedLib* lib;

void InitLib()
{
    act = new Act_Lib();
    lib = act->GetLibPtr();
}
#endif // ACT_LIB_H
