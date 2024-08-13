#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <format>
#include <random>
using namespace std;


int add(int a, int b);

double add(double a, double b);

// Bit flags
// 속성 정보 유무 표기가 필요할 때 사용
// Ex) 쉴드가 있는가, 클로킹이 가능한가, 스팀팩이 가능한가
enum EPropertyFlags : unsigned char // 1Byte
{
	// 16진수		2진수			왼쪽 쉬프트 연산	10진수
	ENone = 0x00,			// 0000 0000	0						0
	EProperty1 = 0x01,			// 0000 0001	1 << 0					1
	EProperty2 = 0x02,			// 0000 0010	1 << 1					2
	EProperty3 = 0x04,			// 0000 0100	1 << 2					4
	EProperty4 = 0x08,			// 0000 1000	1 << 3					8
	EProperty5 = 0x10,			// 0001 0000	1 << 4				   16
	EProperty6 = 0x20,			// 0010 0000	1 << 5				   32
	EProperty7 = 0x40,			// 0100 0000	1 << 6				   64
	EProperty8 = 0x80,			// 1000 0000	1 << 7				  128
};

void HasFlags(unsigned char InProperty);

struct FStruct
{
public:
	FStruct()= default;
	FStruct(const int InValue)
		:Value(InValue)
	{
		
	}
	FStruct(function<void()> InFunction)
		:Function(InFunction)
	{

	}

	FStruct(const FStruct& InOther)
		: Value(InOther.Value)
	{
		std::cout << "Copy Constructor\n";
	}

	~FStruct();

	FStruct& operator=(const FStruct&) = default;

public:
	// 멤버 함수
	void SetValue(const int InValue);

private:
	// 멤버 변수
	int Value = 0;
	function<void()> Function;
};