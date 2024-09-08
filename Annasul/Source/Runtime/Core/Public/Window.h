#pragma once

#include "PlatformTypes.h"

#ifdef PLATFORM_WINDOWS
#include "Windows/WindowsWindow.h"
#else
#error "Platform not supported!"
#endif
