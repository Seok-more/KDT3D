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

// 함수(Assembly:프로시저, c++:메소드...)

/*
반환타입 함수이름([인자타입 매개변수])
{
	함수내용
}
	return ?? ;
*/

// 반환 타입 : int float char double void(딱히반환이없음)...
// return -> 반환 후, 함수에서 탈출(반환값이 없어도됨)
// return 0; 는 return이 생략되면 기본적으로 생성됨



// HW를 콘솔에 출력하는 함수
// input : 없음, output : 없음

void PrintHW() // 인자 타입인 void는 생략해도됨
{
	cout << "Hello World" << endl;
}



// 정수를 받아서, 콘솔에 출력하는 함수
// input : int, output : 없음

void PrintNum(int number)
{
	cout << "숫자는" << number << "입니다." << endl;
}


// 2를 곱하고 결과를 반환하는 함수
// input : int, output : int

int Mul2(int input)
{
	int result = input * 2;
	return result;
}

// 두 숫자를 곱해서 결과를 반환하는 함수
// input : int int, output : int

int Mul(int a, int b)
{
	int c = a * b;
	return c;
}




int main()
{
	PrintHW();

	PrintNum(2);

	int result = Mul2(3);
	cout << "result is " << result << endl;

	int result2 = Mul(2, 5);
	cout << result2 << endl;

	return 0;

}

