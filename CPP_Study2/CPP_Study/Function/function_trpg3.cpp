#include "function_trpg3.h"
#include <iostream>
#include <format>
using namespace std;


void PrintMessage(const char* msg)
{
	cout << "************************\n";
	cout << msg << endl;
	cout << "************************\n";
}


void EnterLobby()
{
	while (1)
	{
		PrintMessage("�κ� �����߽��ϴ�.");
		StatInfo playerInfo;
		CreatePlayer(&playerInfo);
		PrintStatInfo("Player", playerInfo);

		EnterGame(&playerInfo);

	}

}

void CreatePlayer(StatInfo* playerInfo)
{
	bool ready = false;

	while (ready == false)
	{
		PrintMessage("1.���, 2.�ü�, 3.����");
		cout << ">\n";

		int input;
		cin >> input;

		switch (input)
		{
		case 1:
			playerInfo->hp = 100;
			playerInfo->atk = 10;
			playerInfo->def = 5;
			ready = true;
			break;
		case 2:
			playerInfo->hp = 80;
			playerInfo->atk = 15;
			playerInfo->def = 3;
			ready = true;
			break;
		case 3:
			playerInfo->hp = 50;
			playerInfo->atk = 25;
			playerInfo->def = 1;
			ready = true;
			break;
		default:
			break;
		}

	}
}

void PrintStatInfo(const char* name, const StatInfo& info)
{
	cout << "*****************************\n";
	cout << format("HP = {}, ATK = {}, DEF = {}\n", info.hp, info.atk, info.def);
	cout << "*****************************\n";

}

void EnterGame(StatInfo* playerInfo)
{
	const int MONSTER_COUNT = 2;

	PrintMessage("���ӽ���");

	while (true)
	{
		StatInfo monsterInfo[MONSTER_COUNT];
		CreateMonster(monsterInfo, MONSTER_COUNT);

		for (int i = 0; i < MONSTER_COUNT; i++)
		{
			PrintStatInfo("Monster", monsterInfo[i]);
		}

		PrintStatInfo("Player", *playerInfo);

		PrintMessage("1.����, 2.����, 3.����");

		int input;
		cin >> input;

		if (input == 1 || input == 2)
		{
			int index = input - 1;
			bool victory = EnterBattle(playerInfo, &(monsterInfo[index]));
			if (victory == false)
			{
				break;
			}

		}

	}

}

void CreateMonster(StatInfo monsterInfo[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int randValue = 1 + rand() % 3;

		switch (randValue)
		{
		case 1:
			monsterInfo[i].hp = 30;
			monsterInfo[i].atk = 5;
			monsterInfo[i].def = 1;
			break;
		case 2:
			monsterInfo[i].hp = 40;
			monsterInfo[i].atk = 8;
			monsterInfo[i].def = 3;
			break;
		case 3:
			monsterInfo[i].hp = 50;
			monsterInfo[i].atk = 15;
			monsterInfo[i].def = 1;
			break;
		default:
			break;
		}
	}
}

bool EnterBattle(StatInfo* playerInfo, StatInfo* monsterInfo)
{
	while (true)
	{
		int damage = playerInfo->atk = monsterInfo->def;
		if (damage < 0)
		{
			damage = 0;
		}

		monsterInfo->hp -= damage;
		if (monsterInfo->hp < 0)
		{
			monsterInfo->hp = 0;
		}

		PrintStatInfo("Monster", *monsterInfo);

		if (monsterInfo->hp == 0)
		{
			PrintMessage("WIN");
			return true;
		}

		damage = monsterInfo->atk - playerInfo->def;
		if (damage < 0)
		{
			damage = 0;
		}

		playerInfo->hp -= damage;
		if (playerInfo->hp < 0)
		{
			playerInfo->hp = 0;
		}

		PrintStatInfo("Player", *playerInfo);


		if (playerInfo->hp == 0)
		{
			PrintMessage("Lose");
			return false;
		}

	}
}