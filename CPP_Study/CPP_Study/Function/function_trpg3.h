#pragma once
enum class EPlayerType : unsigned char
{
	PT_Knight,
	PT_Archer,
	PT_Mage,
};

enum class EMonsterType : unsigned char
{
	MT_Slime,
	MT_Orc,
	MT_Skeleton,
};

struct StatInfo
{
	int hp = 0;
	int atk = 0;
	int def = 0;

};

void PrintMessage(const char* msg);

void EnterLobby();

void CreatePlayer(StatInfo* playerInfo);

void PrintStatInfo(const char* name, const StatInfo& info);

void EnterGame(StatInfo* playerInfo);

void CreateMonster(StatInfo monsterInfo[], int count);

bool EnterBattle(StatInfo* playerInfo, StatInfo* monsterInfo);