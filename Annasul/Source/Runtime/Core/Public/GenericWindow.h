#pragma once
#include "PlatformTypes.h"
#include "Object.h"
#include "StringView.h"
#include "WindowClass.h"

namespace Annasul
{

	struct FWindowProperties
	{
		FStringView title;
		i32 width;
		i32 height;
	};

	class FGenericWindow
	{
	public:

		FGenericWindow() = default;

		virtual ~FGenericWindow() = default;

	public:

		/// Create the window
		virtual void Create(const FWindowClass& windowClass, const FWindowProperties& props) = 0;

		/// Check if the window is open
		[[nodiscard]] virtual bool IsOpen() const = 0;

	    /// Show the window
	    virtual void Show() = 0;

		/// Hide the window
		virtual void Hide() = 0;

		/// Close the window
		virtual void Close() = 0;

		/// Destroy the window
		virtual void Destroy() = 0;

	};
}
