// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct __dp_mission_potal
    {
        int m_nNums;
        int m_nCodeLen[32];
        char m_strCodes[32][64];
    public:
        __dp_mission_potal();
        void ctor___dp_mission_potal();
        bool find(char* pcode);
        void set(char* szCode);
        ~__dp_mission_potal();
        void dtor___dp_mission_potal();
    };
END_ATF_NAMESPACE
