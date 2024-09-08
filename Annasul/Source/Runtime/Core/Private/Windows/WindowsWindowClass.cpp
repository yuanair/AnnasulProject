#include "pch.h"
#include "../../Public/Windows/WindowsWindowClass.h"

#include <Windows.h>

#include "Runtime/Core/Public/Windows/WindowsDebug.h"
#include "Runtime/Core/Public/Windows/WindowsWindow.h"

namespace Annasul
{

    void FWindowsWindowClass::Register(const FWindowClassProperties& props)
    {
        Unregister();
        ::WNDCLASSEX wnd;
        wnd.cbSize = sizeof(wnd);
        wnd.style = 0;
        wnd.lpfnWndProc = ::DefWindowProc;
        wnd.cbClsExtra = 0;
        wnd.cbWndExtra = sizeof(FWindowsWindow*);
        wnd.hInstance = nullptr;
        wnd.hIcon = nullptr;
        wnd.hCursor = nullptr;
        wnd.hbrBackground = nullptr;
        wnd.lpszMenuName = nullptr;
        wnd.lpszClassName = props.name.GetNullTerminatedData();
        wnd.hIconSm = nullptr;

        m_atom = ::RegisterClassEx(&wnd);
        if (IsRegistered()) return;
        FDebug::Get().LastErrorLog(EDebugLevel::Error, TEXT("RegisterClassEx failed"));
    }

    bool FWindowsWindowClass::IsRegistered() const
    {
        return m_atom != 0;
    }

    void FWindowsWindowClass::Unregister()
    {
        if (!CheckAtomNoLog()) return;
        FDebug::Get().LastErrorConditionLog(::UnregisterClass(MAKEINTATOM(m_atom), ::GetModuleHandle(nullptr)), EDebugLevel::Error, TEXT("UnregisterClass failed"));
    }

    bool FWindowsWindowClass::CheckAtom()
    {
        if (IsRegistered()) return true;
        FDebug::Get().ConditionLog(false, EDebugLevel::Error, TEXT("Window class is not registered"));
        m_atom = 0;
        return false;
    }

    bool FWindowsWindowClass::CheckAtomNoLog()
    {
        if (IsRegistered()) return true;
        m_atom = 0;
        return false;
    }
}
