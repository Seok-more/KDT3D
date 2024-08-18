#pragma once
#include "pch.h"

enum class ConsoleColor
{
	BLACK	= 0,
	RED		= FOREGROUND_RED,
	GREEN	= FOREGROUND_GREEN,
	BLUE	= FOREGROUND_BLUE,
	YELLOW	= RED | GREEN,
	WHITE	= RED | GREEN | BLUE,
};


class ConsoleHelper
{
public: 

public:
	static void SetCursorPosition(int32 x, int32 y);
	static void SetCursorColor(ConsoleColor Color);
	static void ShowCosoleCursor(bool flag);


protected:
};

#include "ConsoleHelper.hpp"