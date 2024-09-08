#pragma once

#include "PlatformTypes.h"

#ifdef PLATFORM_WINDOWS
#include "Windows/WindowsMemory.h"
#else
#error "Platform not supported"
#endif