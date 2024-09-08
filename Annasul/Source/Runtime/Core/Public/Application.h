#pragma once

#include "PlatformTypes.h"

#ifdef PLATFORM_WINDOWS
#include "Windows/WindowsApplication.h"
#else
#error "Platform not supported"
#endif
