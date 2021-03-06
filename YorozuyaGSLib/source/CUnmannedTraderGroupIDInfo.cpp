#include <CUnmannedTraderGroupIDInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderGroupIDInfo::CUnmannedTraderGroupIDInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*);
        (org_ptr(0x140385cd0L))(this);
    };
    void CUnmannedTraderGroupIDInfo::ctor_CUnmannedTraderGroupIDInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*);
        (org_ptr(0x140385cd0L))(this);
    };
    void CUnmannedTraderGroupIDInfo::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*);
        (org_ptr(0x140386f70L))(this);
    };
    bool CUnmannedTraderGroupIDInfo::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, char, uint16_t, char*, char*);
        return (org_ptr(0x1403866c0L))(this, byTableCode, wItemTableIndex, byDivision, byClass);
    };
    bool CUnmannedTraderGroupIDInfo::GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, char, uint16_t, char*, char*, char*, unsigned int*);
        return (org_ptr(0x1403868b0L))(this, byTableCode, wItemTableIndex, byDivision, byClass, bySubClass, dwListIndex);
    };
    bool CUnmannedTraderGroupIDInfo::GetIDInfo(std::vector<std::pair<unsigned long,unsigned long>>* vecInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, std::vector<std::pair<unsigned long,unsigned long>>*);
        return (org_ptr(0x140386430L))(this, vecInfo);
    };
    struct CUnmannedTraderSortType* CUnmannedTraderGroupIDInfo::GetSortType(char byDivision, char bySortType)
    {
        using org_ptr = struct CUnmannedTraderSortType* (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, char, char);
        return (org_ptr(0x140386d80L))(this, byDivision, bySortType);
    };
    bool CUnmannedTraderGroupIDInfo::IsExistGroupID(char byDivision, char byClass, char bySubClass, char bySortType, unsigned int* dwListIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, char, char, char, char, unsigned int*);
        return (org_ptr(0x140386b30L))(this, byDivision, byClass, bySubClass, bySortType, dwListIndex);
    };
    bool CUnmannedTraderGroupIDInfo::IsExistID(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, unsigned int);
        return (org_ptr(0x140386280L))(this, dwID);
    };
    bool CUnmannedTraderGroupIDInfo::LoadXML(char* szFileName)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, char*);
        return (org_ptr(0x140385db0L))(this, szFileName);
    };
    void CUnmannedTraderGroupIDInfo::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, char*);
        (org_ptr(0x140387060L))(this, fmt);
    };
    void CUnmannedTraderGroupIDInfo::SetLogger(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*, struct CLogFile*);
        (org_ptr(0x1403519f0L))(this, pkLogger);
    };
    CUnmannedTraderGroupIDInfo::~CUnmannedTraderGroupIDInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*);
        (org_ptr(0x140385d30L))(this);
    };
    void CUnmannedTraderGroupIDInfo::dtor_CUnmannedTraderGroupIDInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderGroupIDInfo*);
        (org_ptr(0x140385d30L))(this);
    };
END_ATF_NAMESPACE
