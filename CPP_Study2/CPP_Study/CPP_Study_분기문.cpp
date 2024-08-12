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


// 분기문

int main()
{

	int hp = 100;
	int damage = 90;

	hp -= damage;
	bool isDead = (hp <= 0);

	if (isDead)	// <-> if (isDead == false), !isDead도 가능
	{
		cout << "kill" << endl;
	}
	else if (hp <= 20)
	{
		cout << "Runaway" << endl;
	}
	else
	{
		cout << "Daed" << endl;
	}

	const int ROCK = 0;
	const int PAPER = 1;
	const int SCISSORS = 2;

	int input = 0;

	if (input == ROCK)
		cout << "ROCK" << endl;
	else if (input == PAPER)
		cout << "PAPER" << endl;
	else if (input == SCISSORS)
		cout << "SCISSORS" << endl;
	else
		cout << "WHAT" << endl;

	// 위의 사례는 반복이 많이 돼서 문제임

	// switch-case-break
	// - switch 안에는 정수 계열만 넣을 수 있다. float 안됨요

	switch (input)
	{
	case ROCK:
		cout << "ROCK" << endl;
		break;
	case PAPER:
		cout << "PAPER" << endl;
		break;
	case SCISSORS:
		cout << "SCISSORS" << endl;
		break;
	default:
		cout << "WHAT" << endl;
	}

}

