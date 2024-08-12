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

// 배열 기초

#pragma region Struct
struct StatInfo
{
	int hp = 0xAAAAAAAA;
	int atk = 0xBBBBBBBB;
	int def = 0xDDDDDDDD;
};
#pragma endregion


int main()
{
	// 배열의 구조
	// TYPE 이름[크기];
	// 배열의 크기는 상수(const)여야 한다. 물론 VC 컴파일러 기준
	const int monsterCount = 10;
	StatInfo monsters[monsterCount];

	// 지금까지의 변수들의 [이름]은 바구니의 이름이었다.
	int a = 10; // a라는 바구니에 10이라는 값을 넣어주세요
	int b = a; // b라는 바구니에 a 바구니 안의 값을 넣어주세요
	// 얘네는 바구니의 이름이므로 메모리에서 탐색할때 &a 로 검색한다.

	// 배열의 [이름]은 좀 다르다.
	const int playerCount = 10;
	StatInfo players[playerCount];
	// players = monsters; 이거 안됨

	// 배열의 이름 = 배열의 시작 주소(시작 위치를 가리키는 TYPE* 포인터)
	auto WhoAmi = monsters; // auto는 할당할 값의 타입에 자동으로 맞춰줌
	// 배열의 이름은 이미 주소이므로 메모리에서 탐색할때 &를 붙일 필요없이 바로 monsters로 겁색한다.
	// monsters = StatInfo[]StatInfo[]StatInfo[]... 이런식으로 12바이트(4바이트 * 3(hp,atk,def)짜리가 10개 있는상태

	// monster_0는 *포인터 이므로 바구니에는 [주소]가 있을 것이고, 그 주소에는 StatInfo 값이 있을것이다.
	// monster_0는 [ 주소0[ (100, 10 ,1)] StatInfo[] StatInfo[]... ]일 것이다.
	// monster_0 [ 주소0 ]
	StatInfo* monster_0 = monsters;
	monster_0->hp = 100;
	monster_0->atk = 10;
	monster_0->def = 1;

	// 포인터의 덧셈: StatInfo 타입 바구니 한개씩 이동하라는 뜻
	// monster_1은 [ StatInfo[ (100, 10 ,1)] 주소1[(200,5,3)] StatInfo[]... ]
	// monster_1 [ 주소1 ]
	StatInfo* monster_1 = monsters + 1;
	monster_1->hp = 200;
	monster_1->atk = 5;
	monster_1->def = 3;

	// 포인터 <-> 참조
	// monster_2는 [ StatInfo[ (100, 10 ,1)] StatInfo[(200,5,3)] 주소2[]... ]
	// monster_2 [ 주소2 ]
	StatInfo& monster_2 = *(monsters + 2);
	monster_2.hp = 300;
	monster_2.atk = 30;
	monster_2.def = 3;

	// [!] 완전 다른 케이스
	// temp는 [StatInfo[(100, 10, 1)] StatInfo[(200, 5, 3)] 주소t[ 내용물 ]...]
	// temp [ 내용물 ]
	//StatInfo temp = *(monsters + 2);
	StatInfo temp;
	temp = *(monsters + 2); // temp라는 StatInfo를 만들고 주소t의 내용물을 복사만함, 실제로 배열의 데이터를 조작하는 것이 아님
	temp.hp = 400;
	temp.atk = 40;
	temp.def = 4;	// temp라는 값만 바뀜 실제 배열은 그대로

	// 위 내용을 조금 더 자동화 한다
	for (int i = 0; i < 10; i++)
	{
		StatInfo& monster = *(monsters + i); // *(monsters + i) 이게 가독성이 떨어짐
		monster.hp = 100 * (i + 1);
		monster.atk = 10 * (i + 1);
		monster.def = 1 * (i + 1);
	}

	// 인덱스
	// *(monsters + i) = monsters[i]
	for (int i = 0; i < 10; i++)
	{
		// StatInfo& monster = monsters[i];
		// monster.hp = 100 * (i + 1);
		// monster.atk = 10 * (i + 1);
		// monster.def = 1 * (i + 1);

		monsters[i].hp = 100 * (i + 1);
		monsters[i].atk = 10 * (i + 1);
		monsters[i].def = 1 * (i + 1);
	}

	// 배열 초기화 문법
	int numbers[5] = {}; // 해당 배열이 0으로 초기화됨
	int numbers1[10] = { 1,2,3,4,5 }; // [0]부터 [4]까지 데이터 12345채워주고 나머지 0으로 초기화됨
	int numbers2[] = { 1,2,3,4,5,6,7,8,9 }; // 데이터 개수만큼의 배열 크기를 설정해주고 데이터들로 채워줌

	char helloStr[] = { 'H','e','l','l','o','\0' }; // \0: 문자열의 끝이라는 표시, 아스키코드로 NULL
	cout << helloStr << endl;









	return 0;
}


