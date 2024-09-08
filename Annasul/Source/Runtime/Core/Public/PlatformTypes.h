#pragma once

#ifdef _WIN32
#include "Windows/WindowsPlatformTypes.h"
#endif

namespace Annasul
{

    typedef FPlatformTypes::u8 u8;
    typedef FPlatformTypes::u16 u16;
    typedef FPlatformTypes::u32 u32;
    typedef FPlatformTypes::u64 u64;
    typedef FPlatformTypes::i8 i8;
    typedef FPlatformTypes::i16 i16;
    typedef FPlatformTypes::i32 i32;
    typedef FPlatformTypes::i64 i64;
    typedef FPlatformTypes::ANSICHAR ANSICHAR;
    typedef FPlatformTypes::WIDECHAR WIDECHAR;
    typedef FPlatformTypes::TCHAR TCHAR;
    typedef FPlatformTypes::TYPE_OF_NULLPTR TYPE_OF_NULLPTR;
    typedef FPlatformTypes::SizeType SIZE_T;

}

