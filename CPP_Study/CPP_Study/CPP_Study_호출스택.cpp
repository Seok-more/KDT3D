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
using namespace std;


// 함수 선언: 순서 상관없이 미리 선언해 두는 것. 매개 변수 이름이 없어도 되는데 있는게 알아보기는 좋음
#pragma region 함수 선언
void Func1();
void Func2(int a, int b);
void Func3(float a);
#pragma endregion

// 호출 스택
// 어디서 왔는지, 어디로 돌아가는지 확인할 수 있음 
// 브레이크 포인트 잡고 F5눌러서 들어간 후, F10(함수내)/F11(한줄씩)을 통해 추적가능.



void Func1()
{
	cout << "Func1" << endl;

	Func2(1, 2);
}

void Func2(int a, int b)
{
	cout << "Func2" << endl;

	Func3(10);
}

void Func3(float a)
{
	cout << "Func3" << endl;
}



int main()
{
	cout << "main" << endl;
	Func1();



	return 0;
}

