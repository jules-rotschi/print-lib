#pragma once

#include <iostream>
#include <string>

namespace PL
{
	inline void Print(const std::string& str)
	{
		std::cout << str;
	}

	inline void Print(const std::wstring& wstr)
	{
		std::wcout << wstr;
	}

	inline void Print(char c)
	{
		std::cout << c;
	}

	inline void Print(wchar_t wc)
	{
		std::wcout << wc;
	}

	inline void BreakLine()
	{
		Print('\n');
	}

	inline void BreakLineWide()
	{
		Print(L'\n');
	}

	inline void PrintLine(const std::string& str)
	{
		Print(str);
		BreakLine();
	}

	inline void PrintLine(const std::wstring& wstr)
	{
		Print(wstr);
		BreakLineWide();
	}
}
