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

int a = 1;
int b = 2;


bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

bool test;
int hp = 100;
bool isInvincible = true;


int main()
{
#pragma region 비교 연산

	// a == b : a와  b의 값이 같은가? 같으면 1 다르면 0
	isSame = (a == b);

	// a!= b : a와 b의 값이 다른가? 다르면 1 같으면 0
	isDifferent = (a != b);

	// a >= b : a가 b보다 크거나 같은가? 그러면 1 아니면 0
	isGreater = (a >= b);

	// a <= b : a가 b보다 작거나 같은가? 그러면 1 아니면 0
	isSmaller = (a < b);

#pragma endregion

#pragma region 논리 연산

	// ! not : 0이면 1, 그외에는 0
	test = !isSame; // isDiffenert의 의미

	// a && b : 둘 다 1이면 1, 그외에는 0
	test = (hp <= 0 && isInvincible == false); // 죽음

	// a || b : 적어도 하나가 1이면 1, 그외에는 0
	test = (hp > 0 || isInvincible == true); // 살음
	//	 = !(hp <= 0 && isInvincible == false)


#pragma endregion

}

