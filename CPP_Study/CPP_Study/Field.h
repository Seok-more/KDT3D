#pragma once

class Player;
class Monster;

class Field
{
public:
	Field();
	~Field();

public:
	void Update(Player* player);
	void CreateMonster();
	void StartBattle(Player* player);


protected:
	Monster* _monster;

};

