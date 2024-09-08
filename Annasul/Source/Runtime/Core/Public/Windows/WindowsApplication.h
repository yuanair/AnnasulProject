#pragma once

#include "../GenericApplication.h"

namespace Annasul
{
    struct FWindowsApplication : public FGenericApplication
    {

        static i32 Loop();

        static void Quit(i32 exitCode);

    };

    typedef FWindowsApplication FApplication;

}