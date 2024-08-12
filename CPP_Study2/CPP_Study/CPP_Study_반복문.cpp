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


// 반복문

int main()
{
	int count = 0;
	int count2 = 0;

	while (count < 5) // 조건이 안맞으면 바로 넘어감
	{
		cout << "HW" << endl;
		count++;
	}

	do // 적어도 한번은 실행 하고 조건문을 확인, 거의 안씀
	{
		cout << "HW2" << endl;
		count2++;
	} while (count2 < 5);

	for (int count3 = 0; count3 < 5; count3++) // 초기, 조건, 제어
	{
		cout << "HW3" << endl;
	}


	// break: 만나는 순간 자기가 속한 범위의 반복문을 탈출
	// continue: 만나는 순간 자기가 속한 범위의 반복문의 제일 윗부분으로 이동

	int round = 1;
	int hp = 100;
	int damage = 30;

	while (1)
	{
		hp -= damage;
		if (hp < 0)
		{
			hp = 0;
		}

		cout << "ROUND" << round << "체력" << hp << endl;

		if (hp == 0)
		{
			cout << "Kill" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}

		round++;
	}

	// 1~10 홀수 출력

	for (int i = 0; i <= 10; i++)
	{
		bool isEven = (i % 2 == 0);

		if (isEven)
		{
			continue;
		}

		cout << i << endl;
	}



}

