#pragma once
#include "PlatformTypes.h"

#ifdef PLATFORM_WINDOWS
#include "Windows/WindowsWindowClass.h"
#else
#error "Unsupported platform"
#endif