#pragma once

#include "Types.h"
#include <windows.h>
#include <iostream>
#include <vector>
#include <stack>


using namespace std;

struct Pos
{
	bool operator==(Pos& other)
	{
		return(_y == other._y && _x == other._x);
	}

	bool operator!=(Pos& other)
	{
		return !(*this  == other);
	}

	Pos operator+(Pos& other)
	{
		Pos ret;
		ret._y = _y + other._y;
		ret._x = _x + other._x;

		return  ret;
	}

	Pos& operator+=(Pos& other)
	{
		_y += other._y;
		_x += other._x;
		return *this;
	}


public:
	int32 _y = 0;
	int32 _x = 0;
};

enum Dir
{
	DIR_UP = 0,
	DIR_LEFT = 1,
	DIR_DOWN = 2,
	DIR_RIGHT = 3,

	DIR_COUNT = 4
};




#include "pch.hpp"