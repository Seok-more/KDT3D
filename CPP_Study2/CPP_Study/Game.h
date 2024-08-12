#pragma once

//  *A 전방선언 : 헤더파일에서 포인터로 갖고있는애들은 전방선언을 해주자!
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
	// Player _player; -> 게임을 만들기 위해서는 Player가 반드시 있어야 한다. 
						// 또한 Player의 정보만 갖으므로, Knight, Archer등에서 추가로
						// 생기는 정보들을 갖고있을 수 없음
	
	//[4/8바이트 주소바구니] --------> [ Player  ]
	Player* _player;	// 나는 주소만 갖고있긴할껀데, 그래서 Player가 뭔데? *A
	Field* _field;

};

