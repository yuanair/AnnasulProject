#pragma once

#include "PlatformTypes.h"
#include <cstring>

namespace Annasul
{

	struct FGenericMemory
	{

		FORCEINLINE static void* Copy(void* dest, const void* src, const SIZE_T size)
		{
			return ::memcpy(dest, src, size);
		}

		FORCEINLINE static void* Move(void* dest, const void* src, const SIZE_T size)
		{
			return ::memmove(dest, src, size);
		}

	};
}
