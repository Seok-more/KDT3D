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

// 포인터 vs 참조


struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void CreateMonsterByPtr(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}




// 전달방식

StatInfo globalInfo;

void PrintByPtr(StatInfo* info)
{

	if (info == nullptr)
	{
		return;
	}


	cout << "---------------------" << endl;
	cout << info->hp << endl;
	cout << info->attack << endl;
	cout << info->defence << endl;




	// info[주소값] -----> 주소값[데이터]

	// const가 별 뒤에 붙는다면
	// void PrintByPtr(StatInfo* const info)
	// info라는 바구니의 내용물(주소)를 바꿀 수 없음
	// info는 주소값을 갖는 바구니 -> 주소값이 고정이다.

	// const가 별 앞에 붙는다면
	// void PrintByPtr(const StatInfo*  info)
	// info안에 주소가 가리키는 데이터를 바꿀 수 없음
	// 멀리 있는 바구니의 데이터를 바꿀 수 없음

	// info = &globalInfo;
	// info->hp = 10000;


}


void PrintByRef(const StatInfo& info)
{
	cout << "---------------------" << endl;
	cout << info.hp << endl;
	cout << info.attack << endl;
	cout << info.defence << endl;
}




int main()
{
	StatInfo info;
	CreateMonsterByPtr(&info);

	// 포인터 vs 참조
	// 1) 성능 : 똑같음, 어셈블리 수준에서 아예 같은 것임

	// 2) 편의성 : -> / . 
	// - 포인터는 주소를 넘기니 확실하게 원본을 다룬다는 힌트를 줄 수 있음
	// - 참조는 자연스럽게 모르고 지나치거나 함부로 수정 가능 -> const로 예방, 읽기나 가져오긴 가능하지만 수정은 불가 
	//	= 포인터도 const 사용가능, * 기준으로 앞에 붙느냐 뒤에 붙느냐에 따라 의미가 다름, 위 참고

	// 3) 초기화 여부
	// 참조 타입은 바구니의 2번째 이름이므로 참조하는 대상이 없으면 안됨, 초기화가 되있어야한다.
	// 포인터는 대상이 실존하지 않아도 됨. 그냥 어떤 주소라는 뜻임. 초기화 안되어도 된다.
	// 포인터에서 '어떤 주소도 가리키지 않는다'는 의미는? nullptr . StatInfo* pointer = nullptr;

	// 포인터/참조 고려
	// 아예 없는 경우는 포인터(null체크)
	// 바뀌지 않고 읽는 용도(readonly)만 한다면 const ref&하는편
	// 일반적인 경우는 뭐 포인터나 참조나 팀바팀
	// 강사의 팁: ref 위주로 #define OUT만 해서 아무 의미 없는 표시를 생성, OUT을 앞에 붙이면 바뀔수도 있는 값임을 명시하는거임
	// 한번 pointer로 만들어 놓은 것은 계속 pointer로 유지, 한 함수안에 섞어 쓰지마셈



	StatInfo* pointer;
	pointer = &info;
	// StatInfo* pointer = &info; 둘 다 가능
	PrintByPtr(&info);


	// StatInfo& reference; 불가능
	// reference = info;
	StatInfo& reference = info;
	PrintByRef(info);

	// Bonus) 포인터 -> 참조
	// pointer[ 주소(&info) ]		info[데이터]
	PrintByRef(*pointer); // *: 그 바구니가 가진 주소안으로 쏙 들어가라, 포인터타입 명시
	// StatInfo& ref = *pointer;
	// PrintByRef(ref);


	// Bonus) 참조 -> 포인터
	// pointer[ 주소 ]		reference.info[데이터]
	PrintByPtr(&reference); // &: 그 바구니의 주소를 준다, 참조타입 명시
	// StatInfo ptr = &reference;
	// PrintByPtr(ptr);



	return 0;
}


