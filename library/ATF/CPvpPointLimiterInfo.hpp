// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPvpPointLimiter.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CPvpPointLimiterctor_CPvpPointLimiter2_ptr = void (WINAPIV*)(struct CPvpPointLimiter*);
        using CPvpPointLimiterctor_CPvpPointLimiter2_clbk = void (WINAPIV*)(struct CPvpPointLimiter*, CPvpPointLimiterctor_CPvpPointLimiter2_ptr);
        using CPvpPointLimiterCheatUpdate4_ptr = void (WINAPIV*)(struct CPvpPointLimiter*, long double);
        using CPvpPointLimiterCheatUpdate4_clbk = void (WINAPIV*)(struct CPvpPointLimiter*, long double, CPvpPointLimiterCheatUpdate4_ptr);
        using CPvpPointLimiterClear6_ptr = void (WINAPIV*)(struct CPvpPointLimiter*, int64_t, long double, struct CPlayer*);
        using CPvpPointLimiterClear6_clbk = void (WINAPIV*)(struct CPvpPointLimiter*, int64_t, long double, struct CPlayer*, CPvpPointLimiterClear6_ptr);
        using CPvpPointLimiterSet8_ptr = bool (WINAPIV*)(struct CPvpPointLimiter*, long double, struct _PVPPOINT_LIMIT_DB_BASE*);
        using CPvpPointLimiterSet8_clbk = bool (WINAPIV*)(struct CPvpPointLimiter*, long double, struct _PVPPOINT_LIMIT_DB_BASE*, CPvpPointLimiterSet8_ptr);
        using CPvpPointLimiterTakePvpPoint10_ptr = bool (WINAPIV*)(struct CPvpPointLimiter*, long double*, struct CPlayer*, struct CPlayer*);
        using CPvpPointLimiterTakePvpPoint10_clbk = bool (WINAPIV*)(struct CPvpPointLimiter*, long double*, struct CPlayer*, struct CPlayer*, CPvpPointLimiterTakePvpPoint10_ptr);
        using CPvpPointLimiterUpdate12_ptr = void (WINAPIV*)(struct CPvpPointLimiter*, int64_t, long double, long double, bool);
        using CPvpPointLimiterUpdate12_clbk = void (WINAPIV*)(struct CPvpPointLimiter*, int64_t, long double, long double, bool, CPvpPointLimiterUpdate12_ptr);
        
        using CPvpPointLimiterdtor_CPvpPointLimiter14_ptr = void (WINAPIV*)(struct CPvpPointLimiter*);
        using CPvpPointLimiterdtor_CPvpPointLimiter14_clbk = void (WINAPIV*)(struct CPvpPointLimiter*, CPvpPointLimiterdtor_CPvpPointLimiter14_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
