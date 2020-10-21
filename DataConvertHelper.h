#ifndef DATACONVERTHELPER_H
#define DATACONVERTHELPER_H

#include "string"
class __declspec(dllexport) DataConvertHelper
{
public:
    static std::wstring String2Wstring(const std::string& s);

};

#endif // DATACONVERTHELPER_H
