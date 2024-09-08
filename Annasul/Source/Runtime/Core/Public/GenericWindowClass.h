#pragma once

#include "Object.h"
#include "StringView.h"

namespace Annasul
{

	struct FWindowClassProperties
	{
		FStringView name;
	};

	class FGenericWindowClass
	{
	public:

		FGenericWindowClass() = default;

	    virtual ~FGenericWindowClass() = default;

	public:
		///
		/// @param props Properties of the window class to register.
		virtual void Register(const FWindowClassProperties& props) = 0;

		///
		/// @return True if the window class is registered, false otherwise.
		[[nodiscard]] virtual bool IsRegistered() const = 0;

		///
		/// Unregisters the window class.
		virtual void Unregister() = 0;

	};


}
