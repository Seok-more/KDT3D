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

// 함수 마무리

// 오버로딩(중복 정의 : 함수 이름의 재사용)
// - '매개변수' 개수, 타입, 순서 등이 다르면 함수에게 같은 이름을 중복 지원한다.
// - '반환형식'만 다르면 안됨, 걍 애매하게 비슷하면 오류나니까 확실하게 할 것.

int Add(int a, int b)
{
	int result = a + b;
	return result;
}

float Add(float a, float b)
{
	float result = a + b;
	return result;
}

float Add(int a, float b)
{
	float result = a + b;
	return result;
}

// 기본 인자값: 값을 지정하지않으면 자동으로 미리 지정한 인자값으로 채워줌, 이에 해당하는 값은 뒤쪽으로 와야함

void SetPlayerInfo(int hp, int mp, int attack, int guildID = 0, int castle = 0)
{

}


// 스택 오버플로우: 스택에 너무 많이 호출함

int Factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	return n * Factorial(n - 1);
	// 재귀적으로 n이 너무 커지면 스택에 호출이 너무 많아져서 스택 오버플로우가 발생함
	// while로 만들다던가 그런식으로 구조적으로 바꿔야함
}


int main()
{
	SetPlayerInfo(100, 40, 10, 1, 2);
	SetPlayerInfo(100, 40, 10, 1);
	SetPlayerInfo(100, 40, 10);
	SetPlayerInfo(100, 40, 10, 0, 2); // 중간은 못비워둬서 채워줘야함

	int result = Factorial(5);
	cout << result << endl;

	return 0;
}

