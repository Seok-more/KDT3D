// CPP_Study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

// 연습문제

int main()
{
	// 별찍기
	// N*N개의 별 찍기

	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// 별찍기2
	// 1개부터 시작해서 피라미드

	int input2;
	cin >> input2;

	for (int k = 0; k < input2; k++)
	{
		for (int g = 0; g < k + 1; g++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// 별찍기3			
	// 역피라미드

	int input3;
	cin >> input3;

	for (int y = 0; y < input3; y++)
	{
		for (int x = 0; x < input3 - y; x++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// 구구단

	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b < 10; b++)
		{
			int result = a * b;
			cout << a << "*" << b << "=" << result << endl;
		}
	}




}

