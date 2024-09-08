#include "pch.h"
#include "../../Public/Windows/WindowsDebug.h"

#include <cstdio>
#include <Windows.h>

namespace Annasul
{
	FWindowsDebug& FWindowsDebug::Get()
	{
		static FWindowsDebug debug;
		return debug;
	}

	void FWindowsDebug::Log(EDebugLevel level, FStringView message)
	{
		const FStringView levelStr = ToString(level);
		const SIZE_T length = 1 + levelStr.GetSize() + 1 + message.GetSize() + 2;
		const auto debugBuffer = new TCHAR[length];
		if (::swprintf_s(debugBuffer, length, TEXT("[%s] %s") LINE_TERMINATOR, levelStr.GetNullTerminatedData(), message.GetNullTerminatedData()) < 0)
		{
			::OutputDebugString(TEXT("swprintf_s failed") LINE_TERMINATOR);
			return;
		}
		::OutputDebugString(debugBuffer);
	}

	bool FWindowsDebug::ConditionLog(bool condition, EDebugLevel level, FStringView message)
	{
		if (condition) return true;
		Log(level, message);
		return false;
	}

	void FWindowsDebug::LastErrorLog(EDebugLevel level, FStringView message)
	{
		const HRESULT error = HRESULT_FROM_WIN32(::GetLastError());
		// const FStringView errorStr = ToString(error);
		Log(level, TEXT("Windows Last Error code: ") + std::to_wstring(error) + TEXT(" - ") + message.GetData());
	}

	bool FWindowsDebug::LastErrorConditionLog(bool condition, EDebugLevel level, FStringView message)
	{
		if (condition) return true;
		LastErrorLog(level, message);
		return false;
	}
}
