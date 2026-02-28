#pragma once
#include "base/interop/interface.h"

namespace Arieo::Interface::Archive
{
    class IArchive
    {
    public:
        virtual Base::Interop::SharedRef<Base::IBuffer> aquireFileBuffer(Base::Interop::StringView related_path) = 0;
    };

    class IArchiveManager
    {
    public:
        virtual Base::Interop::SharedRef<IArchive> createArchive(Base::Interop::StringView root_path) = 0;
    };
}




