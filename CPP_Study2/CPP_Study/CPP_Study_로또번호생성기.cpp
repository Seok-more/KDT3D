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

// 로또 번호 생성기

#pragma region Struct

#pragma endregion

#pragma region Func
void Swap(int& a, int& b);
void Sort(int numbers[], int count);
void ChooseLotto(int numbers[]);
#pragma endregion


void Swap(int& a, int& b)
{
	int temp = a;

	a = b;
	b = temp;

}

void Sort(int numbers[], int count)  // 배열이 인자로 오면 포인터 형식(주소)이다.
// (1,3,5,2,4,6)
{
	for (int i = 0; i < count - 1; i++)
	{

		for (int j = 0; j < count - 1 - i; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				Swap(numbers[j], numbers[j + 1]);
			}
		}
	}
}

void ChooseLotto(int numbers[])
{
	// 랜덤으로 1~45 사이의 숫자 6개를 골라라 정렬도 하고, 단 중복x
	srand((unsigned)time(0)); // 랜덤 시드 설정

	//  내 코드
	for (int x = 0; x < 6; x++)
	{
		numbers[x] = 1 + (rand() % 45);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (numbers[j] == numbers[j + 1])
			{
				numbers[j + 1] = 1 + (rand() % 45);
				j = j - 1;
			}
			if (numbers[j] > numbers[j + 1])
			{
				Swap(numbers[j], numbers[j + 1]);
			}
		}

		// 강사 코드
		/*
		int count = 0;
		while (count != 6)
		{
			int randValue = 1 + (rand() % 45);

			bool found = false;
			for (int i = 0; i < count; i++)
			{
				if (numbers[i] == randValue) // 이미 찾은 값
				{
					found = true;
					break;
				}
			}

			if (found == false)
			{
				numbers[count] = randValue;
				count++;
			}
		}

		Sort(numbers, 6);
		*/

	}
}


int main()
{
	// 1) Swap 함수 만들기
	int a = 1;
	int b = 2;
	Swap(a, b); // a = 2, b = 1

	cout << a << " <-> " << b << endl;

	// 2) 정렬 함수 만들기 (작은 숫자부터)
	// 배열의 크기를 얻는 방법
	// - sizeof(numbers) / sizeof(int)
	int numbers2[6] = { 1,3,5,4,2,6 };

	int size1 = sizeof(numbers2); // 4바이트 6개 = 24바이트
	int size2 = sizeof(int); // int는 4바이트

	Sort(numbers2, sizeof(numbers2) / sizeof(int));



	// 3) 로또 번호 생성기
	//ChooseLotto(numbers);

	int numbers[6] = {};
	ChooseLotto(numbers);

	for (int i = 0; i < 6; i++)
	{
		cout << numbers[i] << endl;
	}




	return 0;
}


