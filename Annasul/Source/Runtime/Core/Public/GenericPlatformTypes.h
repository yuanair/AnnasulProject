#pragma once

namespace Annasul
{
	struct FGenericPlatformTypes
	{
		typedef unsigned char 		u8;
		typedef unsigned short int	u16;
		typedef unsigned int		u32;
		typedef unsigned long long	u64;
		typedef	signed char			i8;
		typedef signed short int	i16;
		typedef signed int	 		i32;
		typedef signed long long	i64;
		typedef char				ANSICHAR;
		typedef wchar_t				WIDECHAR;
		typedef WIDECHAR			TCHAR;
		typedef decltype(nullptr)	TYPE_OF_NULLPTR;
	};
}
