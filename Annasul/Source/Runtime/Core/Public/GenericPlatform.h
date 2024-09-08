#pragma once
#include "PlatformTypes.h"

namespace Annasul
{
	struct FGenericPlatform
	{

		/// @return The name of the platform, e.g. "Windows", "Mac", "Linux", etc.
		static constexpr TCHAR PLATFORM_NAME[] = TEXT("<Unknown PlatformName>");

	};

}
