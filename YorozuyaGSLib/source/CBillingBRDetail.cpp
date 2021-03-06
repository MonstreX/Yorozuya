#include <CBillingBRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CBillingBRctor_CBillingBR2_ptr CBillingBRctor_CBillingBR2_next(nullptr);
        Info::CBillingBRctor_CBillingBR2_clbk CBillingBRctor_CBillingBR2_user(nullptr);
        
        
        Info::CBillingBRdtor_CBillingBR7_ptr CBillingBRdtor_CBillingBR7_next(nullptr);
        Info::CBillingBRdtor_CBillingBR7_clbk CBillingBRdtor_CBillingBR7_user(nullptr);
        
        
        void CBillingBRctor_CBillingBR2_wrapper(struct CBillingBR* _this)
        {
           CBillingBRctor_CBillingBR2_user(_this, CBillingBRctor_CBillingBR2_next);
        };
        
        void CBillingBRdtor_CBillingBR7_wrapper(struct CBillingBR* _this)
        {
           CBillingBRdtor_CBillingBR7_user(_this, CBillingBRdtor_CBillingBR7_next);
        };
        
        ::std::array<hook_record, 2> CBillingBR_functions = 
        {
            _hook_record {
                (LPVOID)0x14022f3c0L,
                (LPVOID *)&CBillingBRctor_CBillingBR2_user,
                (LPVOID *)&CBillingBRctor_CBillingBR2_next,
                (LPVOID)cast_pointer_function(CBillingBRctor_CBillingBR2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingBR::*)())&CBillingBR::ctor_CBillingBR)
            },
            _hook_record {
                (LPVOID)0x14022f490L,
                (LPVOID *)&CBillingBRdtor_CBillingBR7_user,
                (LPVOID *)&CBillingBRdtor_CBillingBR7_next,
                (LPVOID)cast_pointer_function(CBillingBRdtor_CBillingBR7_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingBR::*)())&CBillingBR::dtor_CBillingBR)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
