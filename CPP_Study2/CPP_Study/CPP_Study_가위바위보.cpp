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

// 연습문제
// 가위바위보

int main()
{
	const int ROCK = 1;
	const int PAPER = 2;
	const int SCISSORS = 3;

	int count = 0;
	int win = 0;

	while (true)
	{
		srand(time(0)); // 시간에따른 랜덤 시드값 설정
		// rand();  0~32767 랜덤

		int value = 1 + (rand() % 3); // 1,2,3 중 1개 무작위

		cout << "가위바위보!" << endl;
		cout << ">" << endl;

		if (count == 0)
		{
			cout << "현재 승률: 없음" << endl;
		}
		else
		{
			//int rate = win / count * 100; // 이게 안된다 -> 정수 / 정수 = 정수 이므로 0.xxx 가 0이된것.
											// 따라서 한개를 float으로 바꾸거나 아래의 방식을 사용할 것

			int rate = (win * 100) / count;
			cout << "현재 승률:" << rate << endl;
		}

		int input;
		cin >> input;


		if ((input == 1 && value == 3) || (input == 2 && value == 1) || (input == 3 && value == 2))
		{
			count++;
			win++;
			cout << "너:" << input << "컴:" << value << endl;
			cout << "Player wins!" << endl;

			cout << "count" << count << endl;
			cout << "win" << win << endl;
			continue;
		}
		else if (input == value)
		{
			cout << "너:" << input << "컴:" << value << endl;
			cout << "Tie" << endl;
			continue;
		}
		else if ((input == 1 && value == 2) || (input == 2 && value == 3) || (input == 3 && value == 1))
		{
			count++;
			cout << "너:" << input << "컴:" << value << endl;
			cout << "Player loses!" << endl;

			cout << "count" << count << endl;
			cout << "win" << win << endl;
			continue;
		}
		else;
		{
			cout << "너:" << input << "컴:" << value << endl;
			cout << "뭐함!" << endl;
			break;
		}
	}


}

