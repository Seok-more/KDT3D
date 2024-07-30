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

// 포인터 실습
// 
// 
// 전역 변수는 최대한 지양 하는게 좋음
// 요약
// 구조체를 내보내는 과정에서
// 
// 포인터를 쓰지 않으면 원본의 값을 복사해서 옮겨 주는 과정이 자주 발생할 수 있다.
// 포인터를 쓰면 실제 원본을 대상으로 작업해서 더 빠를 수 있다. 주소값에 이동해서 원본 데이터를 건드는 과정

#pragma region Struct
struct StatInfo
{
	int hp;		 // StatInfo주소 + 0
	int attack;  // StatInfo주소 + 4
	int defence; // StatInfo주소 + 8
};

#pragma endregion

#pragma region Func
void EnterLobby();
StatInfo CreatePlayer();			// 포인터를 쓰지 않는 버전
void CreateMonster(StatInfo* info); // 포인터를 쓰는 버전
bool StartBattle(StatInfo* player, StatInfo* monster); // 플레이어 승리여부 T/F bool
#pragma endregion

int main()
{
	EnterLobby();

	return 0;
}

void EnterLobby()
{
	cout << "로비입장" << endl;

	StatInfo player;
	player.hp = 0xbbbbbbbb;
	player.attack = 0xbbbbbbbb;
	player.defence = 0xbbbbbbbb; // 어셈블리 잠깐 뜯어볼려고 잘보이는 값으로 초기화 해둔겨 별거 ㄴㄴ

	// [매개변수][RET][지역변수(temp(c,c,c), player(b,b,b))] / [매개변수(&temp)][RET][지역변수(ret(100, 10, 2))] -> [매개변수][RET][지역변수(temp(100,10,2), player(b,b,b))][매개변수(&temp)][RET][지역변수(ret(100, 10, 2))]
	// 즉 Stat Info temp = CreatePlayer();
	//	  player = temp; 처럼 temp라는 곳에 지역변수 값을 복사해서 플레이어로 옮겨주는 과정을 컴파일러가 함, 왠진 모름
	player = CreatePlayer(); // 포인터 없는 버전



	StatInfo monster;
	monster.hp = 0xbbbbbbbb;
	monster.attack = 0xbbbbbbbb;
	monster.defence = 0xbbbbbbbb; // 어셈블리 잠깐 뜯어볼려고 잘보이는 값으로 초기화 해둔겨 별거 ㄴㄴ


	// [매개변수][RET][지역변수(monster(b,b,b)] / [매개변수(&monster)][RET][지역변수] -> [매개변수][RET][지역변수(monster(40,8,1)] / [매개변수(&monster)][RET][지역변수]
	// 즉 매개변수의 몬스터 주소를 통해 바로 지역변수에 값을 바꿔버림
	CreateMonster(&monster); // 포인터 쓰는 버전


	// 번회편 #1
	// 구조체끼리 복사하면 어떨까
	// player = monster;
	//	- player.hp = monster.hp;
	//	- player.attack = monster.attack;
	//	- player.defence = monster.defence; 이런 과정이 진행됨(어셈블리)

	bool vic = StartBattle(&player, &monster);


	if (vic)
	{
		cout << "win" << endl;
	}
	else
	{
		cout << "lose" << endl;
	}




}

StatInfo CreatePlayer()
{
	StatInfo ret;


	cout << "player has been spawned" << endl;

	ret.hp = 100;
	ret.attack = 10;
	ret.defence = 2;

	return ret;
}

void CreateMonster(StatInfo* info)
{
	cout << "monster has been spawned" << endl;

	info->hp = 40;
	info->attack = 8;
	info->defence = 1;

}

bool StartBattle(StatInfo* player, StatInfo* monster)
{
	while (1)
	{
		int damage = player->attack - monster->defence;
		if (damage < 0)
		{
			damage = 0;
		}

		monster->hp -= damage;
		if (monster->hp < 0)
		{
			monster->hp = 0;
		}

		cout << "Monster's Hp :" << monster->hp << endl;

		if (monster->hp == 0)
		{
			return 1;
		}

		damage = monster->attack - player->defence; // int damage가 아닌 이유는 기존 변수를 그대로 쓰겠다는 것
		if (damage < 0)
		{
			damage = 0;
		}

		player->hp -= damage;
		if (player->hp < 0)
		{
			player->hp = 0;
		}

		cout << "player's Hp :" << player->hp << endl;

		if (player->hp == 0)
		{
			return 0;
		}
	}
}
