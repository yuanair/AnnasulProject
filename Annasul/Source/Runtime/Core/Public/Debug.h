#pragma once

#include "PlatformTypes.h"

#ifdef PLATFORM_WINDOWS
#include "Windows/WindowsDebug.h"
#else
#error "Platform not supported!"
#endif
