#include "practice_1.h"
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int StrLen(const char* str)
{
    int couuuu = 0;
    
    for (int i = 0; str[i] != '\0'; ++i)
    {
        ++couuuu;  
    }
 
    return couuuu;
}

char* StrCpy(char* dest, char* src)
{
    int count = 0;

    for (int i = 0; src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
        ++count;
    }

    dest[count] = '\0'; // 마지막 널값은 복사가 안되므로 따로 해줘야함

    return dest;
}



//char* StrCpy(char* dest, char* src) // 포인터 활용 버전
//{
//    char* ret = dest;
//
//    while (*src != '\0')
//    {
//        *dest = *src;
//        ++dest;
//        ++src;
//        
//    }
//
//    *dest = '\0'; // 마지막 널값은 복사가 안되므로 따로 해줘야함
//
//    return ret;
//}


//char* StrCat(char* dest, char* src) 
//{
//    int count1 = 0;
//    int count2 = 0;
//
//    for (int i = 0; src[i] != '\0'; ++i) 
//    {
//        ++count1;
//    }
//
//    for (int j = 0; dest[j] != '\0'; ++j)
//    {
//        src[count1 + j] = dest[j];
//        ++count2;
//    }
//
//    src[count1 + count2] = '\0';
//    
//    return src;
//}

//char* StrCat(char* dest, char* src) // 이미 만든 함수 사용 방법
//{
//    int count1 = StrLen(src);
//    int count2 = 0;
//
//    for (int j = 0; dest[j] != '\0'; ++j)
//    {
//        src[count1 + j] = dest[j];
//        ++count2;
//    }
//
//    src[count1 + count2] = '\0';
//
//    return src;
//}

char* StrCat(char* dest, char* src) // 포인터 사용 방법
{
    char* ret = src;

    while (*src)
    {
        src++;
    }

    while (*dest)
    {
        *src++ = *dest++;
    }

    *src = '\0';
    return ret;

}

int StrCmp(char* a, char* b)
{
    // 두 문자열을 비교하다가 다른 문자가 나왔을 때,  
    // 두 아스키 코드를 빼서 양수면 1, 음수면 -1
    
    int result = 0;

    while (*a && *b)
    {
        ++a;
        ++b;
        if (*a != *b)
        {
            if (*a - *b > 0)
            {
                result = 1;
            }

            else
            {
                result = -1;
            }
        }
    }
    return result;
}

void ReverseStr(char* str)
{
    const int len = StrLen(str);
    char* temp = new char[len + 1];
   
    for (int i = 0; str[i] != '\0'; ++i)
    {
        temp[i] = str[len - i - 1];
    }

    for (int j = 0; str[j] != '\0'; ++j)
    {
        str[j] = temp[j];
    }
    delete temp;
}

//void ReverseStr(char* str) // 강사 방법
//{
//    int len = StrLen(str);
//
//    for (int i = 0; i < len / 2; ++i)
//    {
//        int temp = str[i];
//        str[i] = str[len - i - 1];
//        str[len - i - 1] = temp;
//    }
//}





