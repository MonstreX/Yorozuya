// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ImgDelayDescr.hpp>
#include <UnloadInfo.hpp>


START_ATF_NAMESPACE
    struct  ULI : UnloadInfo
    {
    public:
        void Link();
        ULI(struct ImgDelayDescr* pidd_);
        void ctor_ULI(struct ImgDelayDescr* pidd_);
        void Unlink();
        ~ULI();
        void dtor_ULI();
    };
END_ATF_NAMESPACE
