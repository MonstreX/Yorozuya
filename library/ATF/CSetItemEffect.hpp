// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_AVATOR_DATA.hpp>
#include <_SetItemEff_fld.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct CSetItemEffect
    {
        struct set_effect_info
        {
            bool m_bCheckSetEffect;
            unsigned int m_dwSetItem;
            char m_bySetItemNum;
            char m_bySetEffectNum;
        };
        set_effect_info m_setCount[6];
        set_effect_info m_resetInfo;
        char m_byTotalSetCount;
    public:
        bool Attach_Set(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum);
        CSetItemEffect();
        void ctor_CSetItemEffect();
        char Check_Base_EquipItem(struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld);
        char Check_EquipItem(struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld);
        char Check_Other_EquipItem(struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld);
        bool Detach_Set(unsigned int dwSetItem);
        char GetResetEffectNum();
        unsigned int GetResetIdx();
        char GetResetItemNum();
        void Init_Data(char byIdx);
        void Init_Info();
        bool IsSetOn(unsigned int dwSetItem);
        bool IsSetOnComplete(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum);
        bool Reset_Set(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum);
        int SetOffEffect(unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum);
        int SetOnEffect(struct _AVATOR_DATA* pData, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum);
        void SetResetInfo(bool bSet, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum);
        ~CSetItemEffect();
        void dtor_CSetItemEffect();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CSetItemEffect, 88>(), "CSetItemEffect");
END_ATF_NAMESPACE
