#pragma once
#include "WindowsPlatformTypes.h"
#include "Runtime/Core/Public/GenericWindow.h"

namespace Annasul
{

    class FWindowsWindow final : public FGenericWindow
    {
    public:

        FORCEINLINE FWindowsWindow() : m_hWnd(nullptr) {}

        FORCEINLINE ~FWindowsWindow() override
        {
            FWindowsWindow::Destroy();
        }

    public:
        void Create(const FWindowClass& windowClass, const FWindowProperties& pros) override;
        [[nodiscard]] bool IsOpen() const override;
        void Show() override;
        void Hide() override;
        void Close() override;
        void Destroy() override;

    public:
        bool CheckWindowHandle();
        bool CheckWindowHandleNoLog();

    public:

        FORCEINLINE FWindowsPlatformTypes::FWindowHandle GetWindowHandle() const { return m_hWnd; }

    private:

        FWindowsPlatformTypes::FWindowHandle m_hWnd;

    };

    typedef FWindowsWindow FWindow;
}
