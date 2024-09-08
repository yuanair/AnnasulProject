#pragma once

#include "../GenericPlatformTypes.h"

#define PLATFORM_WINDOWS

#if !defined( _WIN64 )
	#error "Only 64-bit Windows is supported"
#endif

#define FORCEINLINE __forceinline
#define FORCENOINLINE __declspec(noinline)

#define DLLEXPORT __declspec(dllexport)
#define DLLIMPORT __declspec(dllimport)

#define __TEXT(x) L##x
#define TEXT(x) __TEXT(x)

#define LINE_TERMINATOR TEXT("\r\n")

struct HWND__;
typedef Annasul::FGenericPlatformTypes::u16 ATOM;

namespace Annasul
{

	struct FWindowsPlatformTypes : public FGenericPlatformTypes
	{
		typedef u64 SizeType;
		typedef HWND__* FWindowHandle;
		typedef ::ATOM FAtom;
	};

	typedef FWindowsPlatformTypes FPlatformTypes;

}
