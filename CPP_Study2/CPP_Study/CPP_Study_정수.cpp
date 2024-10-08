﻿// CPP_Study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
//여러줄 드래그 Ctrl k c(commnet) -> 여러줄 주석처리, Ctrl k u(uncommnet) -> 주석해제
/*
이렇게도 가능
*/
#include <iostream>
using namespace std;

// 변수 선언
// [타입] [이름];
// [타입] [이름] = [초기값];
// 0이 아닌 초기화 값이 있으면 .data영역,
// 초기값이 0이거나 없으면 .bss영역으로 이동

int hp = 100;


char a; // 1byte (-128~127), signed char a에서 signed가 생략됨
short b; // 2byte (-32768~32767)
int c; // 4bute (-21.4억 ~ 21.4억)
__int64 d; // 8byte (long ling) 64bits (엄청큼)

unsigned char au; // 1byte (0~255)
unsigned short bu; // 2byte (0~65536)
unsigned int cu; // 4bute (0~42.9억)
unsigned __int64 du; // 8byte (long ling) 64bits (0~엄청큼)

// 콘솔/모바일 게임 -> 메모리절약을 위해서 바이트를 타이트하게 해야함
// 무조건 unsigned를 사용할지는 개인차




int main()
{
    // 변수 범위의 중요성

    // 정수 오버플로우
    b = 32767;
    b = b + 1;
    cout << b << endl; // -32768이 나옴; 0111 1111 1111 1111 (32767)에서 부호는 무시한채, 1을 더하는 연산을 하면 1000 0000 0000 0000이므로 

    // 정수 언더플로우
    bu = 0;
    bu = bu - 1;
    cout << bu << endl; //65535가 나옴
    

    std::cout << "체력이" << hp << "남았다" << endl;

}

