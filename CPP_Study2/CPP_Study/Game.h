#pragma once

//  *A ���漱�� : ������Ͽ��� �����ͷ� �����ִ¾ֵ��� ���漱���� ������!
class Player;
class Field;


// is - a
// has - a

class Game
{
public:
	Game();
	~Game();

public:
	void Init();
	void Update();

	void CreatePlayer();



private:
	// Player _player; -> ������ ����� ���ؼ��� Player�� �ݵ�� �־�� �Ѵ�. 
						// ���� Player�� ������ �����Ƿ�, Knight, Archer��� �߰���
						// ����� �������� �������� �� ����
	
	//[4/8����Ʈ �ּҹٱ���] --------> [ Player  ]
	Player* _player;	// ���� �ּҸ� �����ֱ��Ҳ���, �׷��� Player�� ����? *A
	Field* _field;

};

