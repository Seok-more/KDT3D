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

// 티알피지 실습

#pragma region Function
void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomeMonster();
void EnterBattle();
#pragma endregion

#pragma region Global Variables
enum PlayerType
{
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3
};

enum MonsterType
{
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3
};

// 구조체 struct

struct ObjectInfo
{
	int type;
	int hp;
	int attack;
	int defense;
};
ObjectInfo playerInfo; // playerInfo.type
ObjectInfo monsterInfo;

/*
struct ObjectInfo
{
	short type; 2바이트
	int hp;		4바이트
	char attack;1바이트
	int defense;4바이트
};
위와 같은 상황에서 총 11바이트를 사용하는 것이아니라
Padding을 통해 모두 4바이트로 공간을 잡아서 16바이트가 나온다.
그때 그때 컴파일러가 자기 계산하기 편한 사이즈를 잡는다.
*/



#pragma endregion



int main()
{
	srand(time(0)); //랜덤시드생성
	EnterLobby();

	return 0;
}

void EnterLobby()
{
	while (1)
	{
		cout << "-------------------" << endl;
		cout << "로비에 입장했습니다" << endl;
		cout << "-------------------" << endl;

		SelectPlayer();

		cout << "---------------------------" << endl;
		cout << "(1) 필드 입장 (2) 게임 종료" << endl;
		cout << "---------------------------" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterField();
			if (playerInfo.hp == 0)
			{
				return;
			}
		}
		else
		{
			return;
		}

	}
}

void SelectPlayer()
{
	while (1)
	{
		cout << "-------------------" << endl;
		cout << "직업을 골라주세요" << endl;
		cout << "(1) 기사 (2) 궁수 (3) 법사" << endl;
		cout << ">" << endl;

		cin >> playerInfo.type;

		if (playerInfo.type == PT_Knight)
		{
			cout << "선택: 기사" << endl;
			playerInfo.hp = 150;
			playerInfo.attack = 10;
			playerInfo.defense = 5;
			break;
		}
		else if (playerInfo.type == PT_Archer)
		{
			cout << "선택: 궁수" << endl;
			playerInfo.hp = 100;
			playerInfo.attack = 15;
			playerInfo.defense = 3;
			break;
		}
		else if (playerInfo.type == PT_Mage)
		{
			cout << "선택: 법사" << endl;
			playerInfo.hp = 50;
			playerInfo.attack = 25;
			playerInfo.defense = 1;
			break;
		}
	}

}

void EnterField()
{
	while (1)
	{
		cout << "-------------------" << endl;
		cout << "필드에 입장했습니다. " << endl;
		cout << "-------------------" << endl;
		cout << "[Player] HP :" << playerInfo.hp << " / ATT: " << playerInfo.attack << " / DEF : " << playerInfo.defense << endl;

		CreateRandomeMonster();

		cout << "-------------------" << endl;
		cout << "(1) 전투 (2) 도주 " << endl;
		cout << ">" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterBattle();
		}
		else
		{
			return;
		}


	}
}

void CreateRandomeMonster()
{
	monsterInfo.type = 1 + (rand() % 3); // 1~#

	switch (monsterInfo.type)
	{
	case MT_Slime:
		cout << "Slime arrived" << endl;
		monsterInfo.hp = 15;
		monsterInfo.attack = 5;
		monsterInfo.defense = 0;
		break;
	case MT_Orc:
		cout << "Orc arrived" << endl;
		monsterInfo.hp = 40;
		monsterInfo.attack = 10;
		monsterInfo.defense = 3;
		break;
	case MT_Skeleton:
		cout << "Skeleton arrived" << endl;
		monsterInfo.hp = 80;
		monsterInfo.attack = 15;
		monsterInfo.defense = 5;
		break;
	}
}

void EnterBattle()
{
	while (1)
	{
		int damage = playerInfo.attack - monsterInfo.defense;
		if (damage < 0)
		{
			damage = 0;
		}

		monsterInfo.hp -= damage;
		if (monsterInfo.hp < 0)
		{
			monsterInfo.hp = 0;
		}

		cout << "몬스터 남은 체력: " << monsterInfo.hp << endl;
		if (monsterInfo.hp == 0)
		{
			cout << "Enemy has slained" << endl;
			return;
		}

		damage = monsterInfo.attack - playerInfo.defense; //이미 쓴 변수니까 재정의 할 필요없이 갱신함
		if (damage < 0)
		{
			damage = 0;
		}

		playerInfo.hp -= damage;
		if (playerInfo.hp < 0)
		{
			playerInfo.hp = 0;
		}

		cout << "플레이어 남은 체력: " << playerInfo.hp << endl;
		if (playerInfo.hp == 0)
		{
			cout << "Wasted" << endl;
			return;
		}

	}
}

