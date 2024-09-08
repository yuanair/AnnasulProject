#pragma once

#include "PlatformTypes.h"

#ifdef PLATFORM_WINDOWS
	#include "Windows/WindowsPlatform.h"
#elif defined(PLATFORM_LINUX)
	#include "Linux/LinuxPlatform.h"
#elif defined(PLATFORM_MACOS)
	#include "MacOS/MacOSPlatform.h"
#else
	#error "Unsupported platform"
#endif
