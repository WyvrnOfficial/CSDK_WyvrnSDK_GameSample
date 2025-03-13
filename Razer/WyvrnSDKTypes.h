//! \file WyvrnSDKTypes.h
//! \brief Data types.

#ifndef _WYVRNSDKTYPES_H_
#define _WYVRNSDKTYPES_H_

#pragma once

#define LEAN_AND_MEAN
#include <Windows.h>

typedef LONG            RZRESULT;           //!< Return result.

namespace WyvrnSDK
{
    typedef struct APPINFOTYPE
    {
        wchar_t Title[256];
        wchar_t Description[1024];
        struct Author
        {
            wchar_t Name[256];
            wchar_t Contact[256];
        } Author;
        const DWORD SupportedDevice = 63;
        DWORD Category;
    } APPINFOTYPE;
}

#endif
