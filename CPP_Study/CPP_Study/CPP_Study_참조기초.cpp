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

// 참조 기초
// TYPE &[변수이름] = [초기값];
// 참조 전달 방식


struct StatInfo
{
	int hp;
	int attack;
	int defence;
};


// 전달방식

// 1. 값 전달: StatInfo로 넘기면 1000바이트가 전부 복사됨
// [매개변수][RET][지역변수(info)] / [매개변수(info(100, 8, 5)][RET][지역변수]
// CreateMonsterByCopy(info);
void CreateMonsterByCopy(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}

// 2. 주소 전달: StatInfo* 로 넘기면 8바이트(주소값)
// [매개변수][RET][지역변수(info)] / [매개변수(&info)][RET][지역변수(info)]
// CreateMonsterByPtr(&info);
void CreateMonsterByPtr(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

// 3. 참조 전달: StatInfo& 로 넘기면 8바이트(주소값)
// [매개변수][RET][지역변수(info)] / [매개변수(&info)][RET][지역변수(info)]
// CreateMonsterByRef(info);
void CreateMonsterByRef(StatInfo& info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}






int main()
{

	int num = 1; // 4바이트 정수형 바구니에 num이라 부르겠음, 그리고 해당 바구니 주소(data, stack, heap)에 1을 넣어라

	int* ptr = &num; // *는 주소를 담는 바구니임, 주소를 따라가면 int 바구니가 있을거임

	*ptr = 2; // 바구니에 있는 주소를 따라가면 있는 바구니에 2를 넣어라

	int& reference = num; // 참조: C++관점에서는 num이라는 바구니에 또다른 이름을 부여한 것, 로우레벨(어셈블리) 관점에서는 포인터와 완전히 똑같음
	// 앞으로 reference 바구니에다가 뭔갈 하면 실제 num바구니에다가 하면 된다.

	reference = 3; // 실제 num 바구니 값이 바뀜 num = 3


	return 0;
}


