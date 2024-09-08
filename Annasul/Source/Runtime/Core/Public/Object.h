#pragma once

namespace Annasul
{
    class OObject
    {
    public:

        OObject() = default;

        OObject(const OObject&) = delete;

        OObject(OObject&&) = delete;

        virtual ~OObject() = default;

    public:

        OObject& operator=(const OObject&) = delete;

    };
}
