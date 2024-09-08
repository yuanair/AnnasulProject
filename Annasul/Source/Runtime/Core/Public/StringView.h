#pragma once
#include "ArrayView.h"

#include <string>
#pragma include <string>

namespace Annasul
{

    class FStringView : public TFArrayView<TCHAR, FDefaultAllocator>
    {
    public:


        template<SizeType InSize>
        FStringView(const ElementType (&data)[InSize])
            : TFArrayView<TCHAR, FDefaultAllocator>(data)
        {
        }

        FStringView(const ElementType* data, SizeType size) : TFArrayView<TCHAR, FDefaultAllocator>(data, size) {}

        FStringView(const std::wstring& str)
            : TFArrayView<TCHAR, FDefaultAllocator>(str.c_str(), str.size() + 1)
        {

        }

        FStringView(const FStringView& other) = default;
        ~FStringView() = default;

    };

}