#include <CCashDbWorkerTWDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerTWctor_CCashDbWorkerTW2_ptr CCashDbWorkerTWctor_CCashDbWorkerTW2_next(nullptr);
        Info::CCashDbWorkerTWctor_CCashDbWorkerTW2_clbk CCashDbWorkerTWctor_CCashDbWorkerTW2_user(nullptr);
        
        Info::CCashDbWorkerTWGetUseCashQueryStr4_ptr CCashDbWorkerTWGetUseCashQueryStr4_next(nullptr);
        Info::CCashDbWorkerTWGetUseCashQueryStr4_clbk CCashDbWorkerTWGetUseCashQueryStr4_user(nullptr);
        
        
        Info::CCashDbWorkerTWdtor_CCashDbWorkerTW9_ptr CCashDbWorkerTWdtor_CCashDbWorkerTW9_next(nullptr);
        Info::CCashDbWorkerTWdtor_CCashDbWorkerTW9_clbk CCashDbWorkerTWdtor_CCashDbWorkerTW9_user(nullptr);
        
        
        void CCashDbWorkerTWctor_CCashDbWorkerTW2_wrapper(struct CCashDbWorkerTW* _this)
        {
           CCashDbWorkerTWctor_CCashDbWorkerTW2_user(_this, CCashDbWorkerTWctor_CCashDbWorkerTW2_next);
        };
        void CCashDbWorkerTWGetUseCashQueryStr4_wrapper(struct CCashDbWorkerTW* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerTWGetUseCashQueryStr4_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerTWGetUseCashQueryStr4_next);
        };
        
        void CCashDbWorkerTWdtor_CCashDbWorkerTW9_wrapper(struct CCashDbWorkerTW* _this)
        {
           CCashDbWorkerTWdtor_CCashDbWorkerTW9_user(_this, CCashDbWorkerTWdtor_CCashDbWorkerTW9_next);
        };
        
        ::std::array<hook_record, 3> CCashDbWorkerTW_functions = 
        {
            _hook_record {
                (LPVOID)0x140230440L,
                (LPVOID *)&CCashDbWorkerTWctor_CCashDbWorkerTW2_user,
                (LPVOID *)&CCashDbWorkerTWctor_CCashDbWorkerTW2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerTWctor_CCashDbWorkerTW2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerTW::*)())&CCashDbWorkerTW::ctor_CCashDbWorkerTW)
            },
            _hook_record {
                (LPVOID)0x1403220c0L,
                (LPVOID *)&CCashDbWorkerTWGetUseCashQueryStr4_user,
                (LPVOID *)&CCashDbWorkerTWGetUseCashQueryStr4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerTWGetUseCashQueryStr4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerTW::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerTW::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x140230510L,
                (LPVOID *)&CCashDbWorkerTWdtor_CCashDbWorkerTW9_user,
                (LPVOID *)&CCashDbWorkerTWdtor_CCashDbWorkerTW9_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerTWdtor_CCashDbWorkerTW9_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerTW::*)())&CCashDbWorkerTW::dtor_CCashDbWorkerTW)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
