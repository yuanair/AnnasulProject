#include "pch.h"
#include "Runtime/Core/Public/GenericMain.h"

#include "Runtime/Core/Public/PlatformTypes.h"
#include "Runtime/Core/Public/Platform.h"
#include "Runtime/Core/Public/Debug.h"
#include "Runtime/Core/Public/Window.h"
#include "Runtime/Core/Public/WindowClass.h"
#include "Runtime/Core/Public/Application.h"

namespace Annasul
{
	i32 FGenericMain::Main()
	{


		FDebug::Get().Log(EDebugLevel::Info, FPlatform::PLATFORM_NAME);
		FDebug::Get().Log(EDebugLevel::Info, TEXT("Hello Annasul Engine!"));

		{
			FWindowClass windowClass;
			FWindow window;
			windowClass.Register({TEXT("Annasul Engine Window Class")});
			window.Create(windowClass, {TEXT("Annasul Engine"), 1280, 720});
			window.Show();
			FApplication::Loop();
		}


		return 0;
	}
}
