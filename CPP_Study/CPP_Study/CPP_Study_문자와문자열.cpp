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

// 문자와 문자열
// char : 1byte, 알파벳/숫자/문자
// wchar_t : 유니코드 문자

//유니코드
// UTF8: 알파벳, 숫자:1byte, 유럽문자: 2byte, 한글한자: 3byte
// UTF16: 거의 대부분 2byte(wchar_t wch = L '안';)

char ch = 'a'; //cout은 char 전용
char ch2 = '1';
char ch3 = 'a' + 1; // a는 아스키번호 97이므로 97 + 1 = 98번인 b가 나옴

wchar_t wch = L'안'; // UTF16은 아래의 방식대로 해야함
// wcout.imbue(locale("kor"));
// wcout << wch << endl;

// Escape Sequence
// 표기하기 애매한 애들
// \0 = 아스키코드0 = 끝표시, NULL
// \t = 아스키코드9 = Tab
// \n = 아스키코드10 = LineFeed (한줄아래로)
// \r = 아스키코드13 = CarriageReturn (커서 <<)
// \' = 따옴표 안에 따옴표

// 문자열
// 정수 (1~8byte) 고정 길이로
// 마지막에는 \00이 들어가있어야 끝으로 인정(아스키코드0 NULL)

//char str[] = { 'h', 'e', 'l', 'l', 'o' }; //데이터 영역에서는 \0포함할 필요없음 
char str2[] = "Hello World"; //H e l l o (띄어쓰기) W o r l d (\0) 12개임
wchar_t str3[] = L"Hello World";



int main()
{
	cout << ch << endl;

	wcout.imbue(locale("kor"));
	wcout << wch << endl;

	//char str[] = { 'h', 'e', 'l', 'l', 'o', '\0' }; //스택 영역에서는 마지막에 \0을 통해 끝을 표기

	cout << str2 << endl;




}

