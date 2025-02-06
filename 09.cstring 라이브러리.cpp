#include <iostream>

int main()
{
    // cstring 라이브러리
    char nameA[10] = "ABC";
    char nameB[10] = "ABC";
    char nameC[10] = "";

    // 문자열 비교 하는 함수 : 같으면 0을 반환
    if (strcmp(nameA, nameB) == 0)
    {
        int a = 0;
    }

    // 문자열 길이 구하는 함수
    int len = strlen(nameA);

    // 문자열 복사 함수 (복사할 위치, 복사할 소스)
    strcpy_s(nameC, nameA);

    return 0;
}