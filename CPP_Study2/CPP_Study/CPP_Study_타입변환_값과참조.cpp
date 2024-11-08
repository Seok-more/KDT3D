﻿// CPP_Study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
#include <iostream>
#include <format> //std::cout << std::format("i: {}, j: {}\n", i, j);
#include <vector>
#include "Function/obj_ori.h"
#include <iomanip>
using namespace std;

// 타입 변환

// malloc -> void*을 반환하고, 이를 (타입변환)을 통해 사용했음

class Knight
{
public:
	int _hp = 10;
};

class Dog
{
public:
	Dog()
	{

	}

	// 타입 변환 생성자
	Dog(const Knight& knight)
	{
		_age = knight._hp;
	}

	// 타입 변환 연산자
	operator Knight()
	{
		return (Knight)(*this);
	}

public:
	int _age = 7;
	int _cuteness = 1000;
};

class BullDog : public Dog
{
public:
	bool _french;

};




int main()
{
	//---1. 타입 변환 유형 (비트열 재구성 여부)------------------------
	//  [1] 값 타입 변환
	//	: 의미를 최대한 유지하기 위해, 원본 객체와 다른 비트열 재구성
	{
		int a = 123456789; // int는 2의 보수, 075bcd15
		float b = (float)a;// float은 부동소수점(지수 + 유효숫자), 4ceb79a3
		cout << b << endl; // 1.23457e+08
	}

	//	[2] 참조 타입 변환
	//	: 비트열을 재구성하지 않고, '관점'만 바꾸는 것
	//	거의 쓸일 없지만, 포인터 타입 변환도 '참조 타입 변환' 동일한 룰을 따름
	{
		int a = 123456789;		// 075bcd15
		float b = (float&)a;	// 075bcd15
		cout << b << endl;		// 1.6536e-34 (부동소수점 관점에서 저 값을 구성)
	}

	//---2. 타입 변환 유형 (안전도 분류)------------------------
	//	[1] 안전한 변환
	//	: 의미가 항상 100% 완전히 일치함
	//	같은 타입이면서 크기만 더 큰 바구니로 이동
	//	작은 -> 큰 (업캐스팅) : char -> short, short -> int, int -> __int64
	{
		int a = 123456789;
		__int64 b = a;
		cout << b << endl;
	}

	//	[2] 불안전한 변환
	//	: 의미가 일치한다고 보장 못함
	//	타입이 다르거나, 같은 타입이지만 작은 바구니로 이동
	//	큰 -> 작은 (다운캐스팅) : short -> char, int -> short
	{
		int a = 123456789;
		float b = a;
		short c = a;
		cout << b << endl;	// 1.23457e+08
		cout << c << endl;	// -13035
	}

	//---3. 타입 변환 유형 (프로그래머 의도)------------------------
	//	[1] 암시적 변환
	//	: 이미 알려진 타입 변환 규칙에 따라서 컴파일러가 자동으로 타입 변환
	{
		int a = 123456789;
		float b = a; // 암시적
		cout << b << endl;
	}

	//	[2] 명시적 변환
	//	: 프로그래머가 명시적으로 캐스팅을 해서 타입 변환
	{
		int a = 123456789;
		int* b = (int*)a; // 명시적
		cout << b << endl;
	}

	//---3. 타입 변환 유형 (연관없는 클래스간의 변환)-------------------	
	//	[1] 연관없는 클래스 사이의 '값 타입' 변환 (포인터나 참조는 해당x)
	//	일반적으로는 안됨(예외 : 타입 변환 생성자,타입 변환 연산자)
	//	여기는 진짜 그 객체를 대상으로 건드는 부분이라 타입 변환 생성자,연산자 등 까다롭게 봄
	{
		Knight knight;
		Dog dog = (Dog)knight; // 보통은 안됨 -> 타입 변환 생성자
		Knight knight2 = dog; // 타입 변환 연산자
	}

	//	[2] 연관없는 클래스 사이의 '참조 타입' 변환
	//	여기는 어셈블리 관점에서 주소를 지칭하는 정도이므로 여유롭게 봐줌
	{
		Knight knight;

		// Dog& dog = knight; 암시적으로 안됨

		// 어셈블리 : 포인터 = 참조
		// [ 주소 ] -> [ Dog ] 그냥 그 주소에 가면 dog 클래스 처럼 있을껴~
		Dog& dog = (Dog&)knight; // 명시적으로는 가능
		dog._cuteness = 12;	// 엉뚱한 메모리를 건들수 있으므로 조심조심
	}
	//---3. 타입 변환 유형 (상속관계 클래스간의 변환)-------------------
	//	[1] 상속 관계 클래스의 값 타입 변환
	//  : 자식 -> 부모 o / 부모 -> 자식 x
	{
		// Dog dog;
		// BullDog bulldog = dog; 모든 개가 불독은 아니니까

		// 자식 -> 부모o
		BullDog bulldog;
		Dog dog = bulldog; // 모든 불독은 개니까
	}

	//	[2] 상속 관계 클래스의 참조 타입 변환
	//	: 자식 -> 부모 o / 부모 -> 자식 x (명시적O)
	{
		// 부모 -> 자식
		Dog dog;	
		BullDog& bulldog = (BullDog&)dog; // 명시적으로 참조는 뭐 해줌

		// 자식 -> 부모o
		BullDog bulldog;	// [age, cuteness, french] 
		Dog& dog = bulldog;	// [age, cuteness]만 있으면 되므로 암시적으로 안전하게 통과
	}

	// 결론
	// [값 타입 변환] : 진짜 비트열도 바꾸고, 논리적으로 말이 되게 바꾸는 변환
	// [참조 타입 변환] : 비트열은 냅두고 우리의 '관점'만 바꾸는 변환
	//					명시적 요구 O,암시적 실행은 안전성 여부 관련
	//					안전(Bulldog -> dog)	 / 위험(dog -> Bulldog)
	//					메모리 침범의 위험등, 명시적으로 해야만 겨우 들어줌




	return 0;
}