#pragma once

#include "../GenericPlatform.h"

namespace Annasul
{
	struct FWindowsPlatform : public FGenericPlatform
	{

		static constexpr TCHAR PLATFORM_NAME[] = TEXT("Windows");

	};

	typedef FWindowsPlatform FPlatform;

}