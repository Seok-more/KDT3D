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
#include <format> //std::string str = std::format("{}+{}={}", 16, 14, 30);
#include "Function/practice_1.h"
#include <array>
#include <vector>

using namespace std;

// 연습문제

// 1. 문자열 출력


int main()
{
#pragma warning(disable: 4996) //strcpy()오류 무시

	const int BUF_SIZE = 100;

	// [H][e][l][l][o][\0][][][][]...[]
	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE] = "Hellp";


	// 1. 문자열 길이 출력
	//int len = sizeof(a); // 100
	//int len2 = strlen(a); // 5

	//cout << len << "/" << len2 << endl;

	//int answer1 = StrLen("asdfasdasd");
	//cout << answer1 << endl;


	// 2. 문자열 복사 함수
	//strcpy(b, a);
	//char* answer2 = StrCpy(b, a);
	//cout << answer2 << endl;


	// 3. 문자열 덧붙이기 함수
	/*char* k = strcat(a, b);
	cout << k << endl;*/

	/*char* answer3 = StrCat(b, a);
	cout << answer3 << endl;*/

	// 4. 문자열 비교 함수
	//int g = strcmp(a, b);
	//cout << g << endl; // 완전히 같으면 0, a가 b보다 사전 순으로 앞이면 -1, 뒤면 1

	//StrCmp(a, b);

	// 5. 문자열 뒤집기 함수
	//ReverseStr(a);
	//cout << a << endl;




	return 0;
}


