#pragma once
#include "Runtime/Core/Public/GenericWindowClass.h"

namespace Annasul
{

    class FWindowsWindowClass final : public FGenericWindowClass
    {
    public:
        FORCEINLINE FWindowsWindowClass() : m_atom(0) {}
        FORCEINLINE ~FWindowsWindowClass() override
        {
            FWindowsWindowClass::Unregister();
        }

    public:
        void Register(const FWindowClassProperties& props) override;
        [[nodiscard]] bool IsRegistered() const override;
        void Unregister() override;
    public:
        bool CheckAtom();
        bool CheckAtomNoLog();

    public:
        FORCEINLINE FPlatformTypes::FAtom GetAtom() const { return m_atom; }

    private:
        FPlatformTypes::FAtom m_atom;
    };

    typedef FWindowsWindowClass FWindowClass;

}
