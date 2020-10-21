#ifndef ACT_OBJECT_H
#define ACT_OBJECT_H

#include <QString>

#include "../dependence/actutltypelib.h"
#include "../dependence/actprogtypelib.h"

using namespace ActUtlTypeLib;
using namespace ActProgTypeLib;

/** @brief 单独给MX组件申请一个堆内存
  * @param
  * @param
  * @retval None
  */
class Act_Lib
{
public:
    //
    Act_Lib();
    ActProgTypeLib::ActProgType instance;
};
ActProgType* lib;

/** @brief 组件
  * @param
  * @param
  * @retval None
  */
struct Act_Device
{
public:
    const QString& szDevice;
    int lData;
};


class Act_Object
{
public:
    Act_Object();
};

#endif // ACT_OBJECT_H
