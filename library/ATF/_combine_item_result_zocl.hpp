// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _combine_item_result_zocl
    {
        struct  __item
        {
            char byTableCode;
            unsigned __int16 wItemIndex;
            unsigned int dwDurPoint;
            unsigned __int16 wSerial;
            unsigned int dwLv;
        };
        char byErrCode;
        unsigned int dwFee;
        unsigned int dwLeftDalant;
        __item NewItem;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
