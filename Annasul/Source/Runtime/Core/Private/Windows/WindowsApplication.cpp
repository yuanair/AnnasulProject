#include "pch.h"

#include "../../Public/Windows/WindowsApplication.h"

#include <Windows.h>

namespace Annasul
{
    i32 FWindowsApplication::Loop()
    {
        ::MSG msg;
        do
        {
            if (::PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
            else
            {

            }
        }
        while (msg.message != WM_QUIT);
        return static_cast<i32>(msg.wParam);
    }

    void FWindowsApplication::Quit(i32 exitCode)
    {
        ::PostQuitMessage(exitCode);
    }
}
