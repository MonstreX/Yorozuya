// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _nuclear_bomb_position_inform_zocl
    {
        char byRaceCode;
        char byUseClass;
        float zPos[3];
    public:
        _nuclear_bomb_position_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _nuclear_bomb_position_inform_zocl*);
            (org_ptr(0x14013e5e0L))(this);
        };
        void ctor__nuclear_bomb_position_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _nuclear_bomb_position_inform_zocl*);
            (org_ptr(0x14013e5e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
