// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HWND__.hpp>
#include <tagRECT.hpp>


START_ATF_NAMESPACE
    struct tagHH_WINTYPE
    {
        int cbStruct;
        int fUniCodeStrings;
        const char *pszType;
        unsigned int fsValidMembers;
        unsigned int fsWinProperties;
        const char *pszCaption;
        unsigned int dwStyles;
        unsigned int dwExStyles;
        tagRECT rcWindowPos;
        int nShowState;
        HWND__ *hwndHelp;
        HWND__ *hwndCaller;
        unsigned int *paInfoTypes;
        HWND__ *hwndToolBar;
        HWND__ *hwndNavigation;
        HWND__ *hwndHTML;
        int iNavWidth;
        tagRECT rcHTML;
        const char *pszToc;
        const char *pszIndex;
        const char *pszFile;
        const char *pszHome;
        unsigned int fsToolBarFlags;
        int fNotExpanded;
        int curNavType;
        int tabpos;
        int idNotify;
        char tabOrder[20];
        int cHistory;
        const char *pszJump1;
        const char *pszJump2;
        const char *pszUrlJump1;
        const char *pszUrlJump2;
        tagRECT rcMinSize;
        int cbInfoTypes;
        const char *pszCustomTabs;
    };
END_ATF_NAMESPACE
