#include <CMonsterAggroMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMonsterAggroMgrctor_CMonsterAggroMgr2_ptr CMonsterAggroMgrctor_CMonsterAggroMgr2_next(nullptr);
        Info::CMonsterAggroMgrctor_CMonsterAggroMgr2_clbk CMonsterAggroMgrctor_CMonsterAggroMgr2_user(nullptr);
        
        Info::CMonsterAggroMgrGetKingPowerDamageCharacter4_ptr CMonsterAggroMgrGetKingPowerDamageCharacter4_next(nullptr);
        Info::CMonsterAggroMgrGetKingPowerDamageCharacter4_clbk CMonsterAggroMgrGetKingPowerDamageCharacter4_user(nullptr);
        
        Info::CMonsterAggroMgrGetTopAggroCharacter6_ptr CMonsterAggroMgrGetTopAggroCharacter6_next(nullptr);
        Info::CMonsterAggroMgrGetTopAggroCharacter6_clbk CMonsterAggroMgrGetTopAggroCharacter6_user(nullptr);
        
        Info::CMonsterAggroMgrGetTopDamageCharacter8_ptr CMonsterAggroMgrGetTopDamageCharacter8_next(nullptr);
        Info::CMonsterAggroMgrGetTopDamageCharacter8_clbk CMonsterAggroMgrGetTopDamageCharacter8_user(nullptr);
        
        Info::CMonsterAggroMgrInit10_ptr CMonsterAggroMgrInit10_next(nullptr);
        Info::CMonsterAggroMgrInit10_clbk CMonsterAggroMgrInit10_user(nullptr);
        
        Info::CMonsterAggroMgrOnlyOnceInit12_ptr CMonsterAggroMgrOnlyOnceInit12_next(nullptr);
        Info::CMonsterAggroMgrOnlyOnceInit12_clbk CMonsterAggroMgrOnlyOnceInit12_user(nullptr);
        
        Info::CMonsterAggroMgrProcess14_ptr CMonsterAggroMgrProcess14_next(nullptr);
        Info::CMonsterAggroMgrProcess14_clbk CMonsterAggroMgrProcess14_user(nullptr);
        
        Info::CMonsterAggroMgrResetAggro16_ptr CMonsterAggroMgrResetAggro16_next(nullptr);
        Info::CMonsterAggroMgrResetAggro16_clbk CMonsterAggroMgrResetAggro16_user(nullptr);
        
        Info::CMonsterAggroMgrSearchAggroNode18_ptr CMonsterAggroMgrSearchAggroNode18_next(nullptr);
        Info::CMonsterAggroMgrSearchAggroNode18_clbk CMonsterAggroMgrSearchAggroNode18_user(nullptr);
        
        Info::CMonsterAggroMgrSendChangeAggroData20_ptr CMonsterAggroMgrSendChangeAggroData20_next(nullptr);
        Info::CMonsterAggroMgrSendChangeAggroData20_clbk CMonsterAggroMgrSendChangeAggroData20_user(nullptr);
        
        Info::CMonsterAggroMgrSetAggro22_ptr CMonsterAggroMgrSetAggro22_next(nullptr);
        Info::CMonsterAggroMgrSetAggro22_clbk CMonsterAggroMgrSetAggro22_user(nullptr);
        
        Info::CMonsterAggroMgrSetTopAggroCharacter24_ptr CMonsterAggroMgrSetTopAggroCharacter24_next(nullptr);
        Info::CMonsterAggroMgrSetTopAggroCharacter24_clbk CMonsterAggroMgrSetTopAggroCharacter24_user(nullptr);
        
        Info::CMonsterAggroMgrShortRankDelay26_ptr CMonsterAggroMgrShortRankDelay26_next(nullptr);
        Info::CMonsterAggroMgrShortRankDelay26_clbk CMonsterAggroMgrShortRankDelay26_user(nullptr);
        
        Info::CMonsterAggroMgr_GetBlinkNode28_ptr CMonsterAggroMgr_GetBlinkNode28_next(nullptr);
        Info::CMonsterAggroMgr_GetBlinkNode28_clbk CMonsterAggroMgr_GetBlinkNode28_user(nullptr);
        
        Info::CMonsterAggroMgr_SearchAggroNode30_ptr CMonsterAggroMgr_SearchAggroNode30_next(nullptr);
        Info::CMonsterAggroMgr_SearchAggroNode30_clbk CMonsterAggroMgr_SearchAggroNode30_user(nullptr);
        
        Info::CMonsterAggroMgr_ShortRank32_ptr CMonsterAggroMgr_ShortRank32_next(nullptr);
        Info::CMonsterAggroMgr_ShortRank32_clbk CMonsterAggroMgr_ShortRank32_user(nullptr);
        
        
        Info::CMonsterAggroMgrdtor_CMonsterAggroMgr34_ptr CMonsterAggroMgrdtor_CMonsterAggroMgr34_next(nullptr);
        Info::CMonsterAggroMgrdtor_CMonsterAggroMgr34_clbk CMonsterAggroMgrdtor_CMonsterAggroMgr34_user(nullptr);
        
        
        void CMonsterAggroMgrctor_CMonsterAggroMgr2_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgrctor_CMonsterAggroMgr2_user(_this, CMonsterAggroMgrctor_CMonsterAggroMgr2_next);
        };
        struct CCharacter* CMonsterAggroMgrGetKingPowerDamageCharacter4_wrapper(struct CMonsterAggroMgr* _this)
        {
           return CMonsterAggroMgrGetKingPowerDamageCharacter4_user(_this, CMonsterAggroMgrGetKingPowerDamageCharacter4_next);
        };
        struct CCharacter* CMonsterAggroMgrGetTopAggroCharacter6_wrapper(struct CMonsterAggroMgr* _this)
        {
           return CMonsterAggroMgrGetTopAggroCharacter6_user(_this, CMonsterAggroMgrGetTopAggroCharacter6_next);
        };
        struct CCharacter* CMonsterAggroMgrGetTopDamageCharacter8_wrapper(struct CMonsterAggroMgr* _this)
        {
           return CMonsterAggroMgrGetTopDamageCharacter8_user(_this, CMonsterAggroMgrGetTopDamageCharacter8_next);
        };
        void CMonsterAggroMgrInit10_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgrInit10_user(_this, CMonsterAggroMgrInit10_next);
        };
        void CMonsterAggroMgrOnlyOnceInit12_wrapper(struct CMonsterAggroMgr* _this, struct CMonster* pMonster)
        {
           CMonsterAggroMgrOnlyOnceInit12_user(_this, pMonster, CMonsterAggroMgrOnlyOnceInit12_next);
        };
        void CMonsterAggroMgrProcess14_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgrProcess14_user(_this, CMonsterAggroMgrProcess14_next);
        };
        void CMonsterAggroMgrResetAggro16_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgrResetAggro16_user(_this, CMonsterAggroMgrResetAggro16_next);
        };
        struct CAggroNode* CMonsterAggroMgrSearchAggroNode18_wrapper(struct CMonsterAggroMgr* _this, struct CCharacter* pCharacter)
        {
           return CMonsterAggroMgrSearchAggroNode18_user(_this, pCharacter, CMonsterAggroMgrSearchAggroNode18_next);
        };
        void CMonsterAggroMgrSendChangeAggroData20_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgrSendChangeAggroData20_user(_this, CMonsterAggroMgrSendChangeAggroData20_next);
        };
        void CMonsterAggroMgrSetAggro22_wrapper(struct CMonsterAggroMgr* _this, struct CCharacter* pCharacter, int nDam, int nAttackType, unsigned int dwAttackSerial, int bOtherPlayerSupport, int bTempSkill)
        {
           CMonsterAggroMgrSetAggro22_user(_this, pCharacter, nDam, nAttackType, dwAttackSerial, bOtherPlayerSupport, bTempSkill, CMonsterAggroMgrSetAggro22_next);
        };
        void CMonsterAggroMgrSetTopAggroCharacter24_wrapper(struct CMonsterAggroMgr* _this, struct CCharacter* p)
        {
           CMonsterAggroMgrSetTopAggroCharacter24_user(_this, p, CMonsterAggroMgrSetTopAggroCharacter24_next);
        };
        void CMonsterAggroMgrShortRankDelay26_wrapper(struct CMonsterAggroMgr* _this, unsigned int dwDelayTime)
        {
           CMonsterAggroMgrShortRankDelay26_user(_this, dwDelayTime, CMonsterAggroMgrShortRankDelay26_next);
        };
        struct CAggroNode* CMonsterAggroMgr_GetBlinkNode28_wrapper(struct CMonsterAggroMgr* _this)
        {
           return CMonsterAggroMgr_GetBlinkNode28_user(_this, CMonsterAggroMgr_GetBlinkNode28_next);
        };
        struct CAggroNode* CMonsterAggroMgr_SearchAggroNode30_wrapper(struct CMonsterAggroMgr* _this, struct CCharacter* pCharacter)
        {
           return CMonsterAggroMgr_SearchAggroNode30_user(_this, pCharacter, CMonsterAggroMgr_SearchAggroNode30_next);
        };
        void CMonsterAggroMgr_ShortRank32_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgr_ShortRank32_user(_this, CMonsterAggroMgr_ShortRank32_next);
        };
        
        void CMonsterAggroMgrdtor_CMonsterAggroMgr34_wrapper(struct CMonsterAggroMgr* _this)
        {
           CMonsterAggroMgrdtor_CMonsterAggroMgr34_user(_this, CMonsterAggroMgrdtor_CMonsterAggroMgr34_next);
        };
        
        ::std::array<hook_record, 17> CMonsterAggroMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14015db60L,
                (LPVOID *)&CMonsterAggroMgrctor_CMonsterAggroMgr2_user,
                (LPVOID *)&CMonsterAggroMgrctor_CMonsterAggroMgr2_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrctor_CMonsterAggroMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::ctor_CMonsterAggroMgr)
            },
            _hook_record {
                (LPVOID)0x14015e060L,
                (LPVOID *)&CMonsterAggroMgrGetKingPowerDamageCharacter4_user,
                (LPVOID *)&CMonsterAggroMgrGetKingPowerDamageCharacter4_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrGetKingPowerDamageCharacter4_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CMonsterAggroMgr::*)())&CMonsterAggroMgr::GetKingPowerDamageCharacter)
            },
            _hook_record {
                (LPVOID)0x14015dfa0L,
                (LPVOID *)&CMonsterAggroMgrGetTopAggroCharacter6_user,
                (LPVOID *)&CMonsterAggroMgrGetTopAggroCharacter6_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrGetTopAggroCharacter6_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CMonsterAggroMgr::*)())&CMonsterAggroMgr::GetTopAggroCharacter)
            },
            _hook_record {
                (LPVOID)0x14015e000L,
                (LPVOID *)&CMonsterAggroMgrGetTopDamageCharacter8_user,
                (LPVOID *)&CMonsterAggroMgrGetTopDamageCharacter8_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrGetTopDamageCharacter8_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CMonsterAggroMgr::*)())&CMonsterAggroMgr::GetTopDamageCharacter)
            },
            _hook_record {
                (LPVOID)0x14015dca0L,
                (LPVOID *)&CMonsterAggroMgrInit10_user,
                (LPVOID *)&CMonsterAggroMgrInit10_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrInit10_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::Init)
            },
            _hook_record {
                (LPVOID)0x14015dc40L,
                (LPVOID *)&CMonsterAggroMgrOnlyOnceInit12_user,
                (LPVOID *)&CMonsterAggroMgrOnlyOnceInit12_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrOnlyOnceInit12_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)(struct CMonster*))&CMonsterAggroMgr::OnlyOnceInit)
            },
            _hook_record {
                (LPVOID)0x14015e120L,
                (LPVOID *)&CMonsterAggroMgrProcess14_user,
                (LPVOID *)&CMonsterAggroMgrProcess14_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrProcess14_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::Process)
            },
            _hook_record {
                (LPVOID)0x14015e900L,
                (LPVOID *)&CMonsterAggroMgrResetAggro16_user,
                (LPVOID *)&CMonsterAggroMgrResetAggro16_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrResetAggro16_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::ResetAggro)
            },
            _hook_record {
                (LPVOID)0x14017a520L,
                (LPVOID *)&CMonsterAggroMgrSearchAggroNode18_user,
                (LPVOID *)&CMonsterAggroMgrSearchAggroNode18_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrSearchAggroNode18_wrapper),
                (LPVOID)cast_pointer_function((struct CAggroNode*(CMonsterAggroMgr::*)(struct CCharacter*))&CMonsterAggroMgr::SearchAggroNode)
            },
            _hook_record {
                (LPVOID)0x14015e950L,
                (LPVOID *)&CMonsterAggroMgrSendChangeAggroData20_user,
                (LPVOID *)&CMonsterAggroMgrSendChangeAggroData20_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrSendChangeAggroData20_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::SendChangeAggroData)
            },
            _hook_record {
                (LPVOID)0x14015dda0L,
                (LPVOID *)&CMonsterAggroMgrSetAggro22_user,
                (LPVOID *)&CMonsterAggroMgrSetAggro22_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrSetAggro22_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)(struct CCharacter*, int, int, unsigned int, int, int))&CMonsterAggroMgr::SetAggro)
            },
            _hook_record {
                (LPVOID)0x14014c2a0L,
                (LPVOID *)&CMonsterAggroMgrSetTopAggroCharacter24_user,
                (LPVOID *)&CMonsterAggroMgrSetTopAggroCharacter24_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrSetTopAggroCharacter24_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)(struct CCharacter*))&CMonsterAggroMgr::SetTopAggroCharacter)
            },
            _hook_record {
                (LPVOID)0x14015e0c0L,
                (LPVOID *)&CMonsterAggroMgrShortRankDelay26_user,
                (LPVOID *)&CMonsterAggroMgrShortRankDelay26_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrShortRankDelay26_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)(unsigned int))&CMonsterAggroMgr::ShortRankDelay)
            },
            _hook_record {
                (LPVOID)0x14015e2e0L,
                (LPVOID *)&CMonsterAggroMgr_GetBlinkNode28_user,
                (LPVOID *)&CMonsterAggroMgr_GetBlinkNode28_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgr_GetBlinkNode28_wrapper),
                (LPVOID)cast_pointer_function((struct CAggroNode*(CMonsterAggroMgr::*)())&CMonsterAggroMgr::_GetBlinkNode)
            },
            _hook_record {
                (LPVOID)0x14015e210L,
                (LPVOID *)&CMonsterAggroMgr_SearchAggroNode30_user,
                (LPVOID *)&CMonsterAggroMgr_SearchAggroNode30_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgr_SearchAggroNode30_wrapper),
                (LPVOID)cast_pointer_function((struct CAggroNode*(CMonsterAggroMgr::*)(struct CCharacter*))&CMonsterAggroMgr::_SearchAggroNode)
            },
            _hook_record {
                (LPVOID)0x14015e370L,
                (LPVOID *)&CMonsterAggroMgr_ShortRank32_user,
                (LPVOID *)&CMonsterAggroMgr_ShortRank32_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgr_ShortRank32_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::_ShortRank)
            },
            _hook_record {
                (LPVOID)0x14015dc90L,
                (LPVOID *)&CMonsterAggroMgrdtor_CMonsterAggroMgr34_user,
                (LPVOID *)&CMonsterAggroMgrdtor_CMonsterAggroMgr34_next,
                (LPVOID)cast_pointer_function(CMonsterAggroMgrdtor_CMonsterAggroMgr34_wrapper),
                (LPVOID)cast_pointer_function((void(CMonsterAggroMgr::*)())&CMonsterAggroMgr::dtor_CMonsterAggroMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
