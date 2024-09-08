#pragma once
#include "PlatformTypes.h"

namespace Annasul
{

	struct FGenericApplication
	{

		static i32 Loop() = delete;

		static void Quit(i32 exitCode) = delete;

	};
}
