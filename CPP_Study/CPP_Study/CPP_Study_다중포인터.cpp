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

// 다중 포인터

#pragma region Struct

#pragma endregion

#pragma region Func

void SetNumber(int* a)
{
	*a = 1; // a의 원본 위치로 이동해서 1이라는 값으로 바꿈
}

void SetMessage(const char* a)
{
	a = "Bye"; // 이것이 틀린이유는 아래참고%

	// *a = 'B'라고 했어야하나, 이 경우 a의 주소를 타고 가도 const char가 있을것이라 못바꾼다.
	// *(a+1) = 'y' 이런식으로 고치는게 맞지
	// a[0] = 'B'; 
	// a[1] = 'y'; // a에서 const를 제거하면 이렇게 하는게 베스트
}

void SetMessage(const char** a) // 포인터의 포인터
{
	*a = "Bye";
}

void SetMessage2(const char*& a) // 포인터의 참조
// a에게 다른 이름을 주고 원본을 건들겠다.
{
	a = "WOW";
}


#pragma endregion

// 다중 포인터


int main()
{
	int a = 0;
	SetNumber(&a);

	// cout << a << endl;

	// .rodata어딘가에 Hello : (주소)[H][e][l][l][o][\0] 있음
	// % .rodata어딘가에 Bye : (주소)[B][y][e][\0]의 (주소)를 a에 넣어줘라

	// msg[ (주소) ] << 8바이트, 
	const char* msg = "Hello";

	// [매개변수][RET][지역변수(msg(Hello주소)][매개변수(a(Hello주소))][RET][지역변수]
	// % [매개변수][RET][지역변수(msg(Hello주소)][매개변수(a(Bye주소))][RET][지역변수]
	//												^-- 이부분은 함수가 끝나면 스택프레임이 넘어가서 유효하지 않아짐

	// 실제로 바꿔야 하는것은 [매개변수][RET][지역변수(msg(Hello주소)]여기의 (Hello주소) 아이가
	SetMessage(msg);
	cout << msg << endl; // Hello가 출력됨

	// Hello주소 [ (주소)[H][e][l][l][o][\0] ] << .rodata어딘가에 1바이트
	// msg[ Hello주소 ] << 8바이트
	// pp[ &msg ] << 8바이트
	const char** pp = &msg; // 어떤 주소를 타고 들어가면은 그안에 const char* 포인터가 있어야함. 그리고 그 포인터 안에는 const char가 있고

	// [매개변수][RET][지역변수(msg(Hello주소)][매개변수(a(&msg msg의 주소))][RET][지역변수]
	SetMessage(&msg); // Bye가 출력됨
	//*pp = "Bye"; // Bye가 출력됨, msg바구니 안에 Hello의 주소가 아니라 Bye의 주소가 들어감
	cout << msg << endl;

	// 다중 포인터
	// 그냥 양파까기느낌
	// *을 하나씩 까면서 타고간다. 

	// [매개변수][RET][지역변수(msg(Hello주소)][매개변수(a(&msg msg의 주소))][RET][지역변수]
	SetMessage2(msg); // 포인터의 참조 

	return 0;
}


