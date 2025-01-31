#include <iostream>
using namespace std;

// 연습문제 1번
// 세 문장을 2차 배열(3 x 10)에 입력 받아주세요
// 각 문장의 맨 마지막 글자들을 출력하시면 됩니다
// 각 문장 마지막 글자를 찾는 함수를 만들어서 풀어주세요.
// 함수 원형 : char findChar(char* str) 과 같은 형태로 작성하여 풀어주시면 됩니다.

// 입력 예제
// MINCODING
// APPLE
// SKTOWN
// 출력 GEN

char findChar(char* str) 
{
    int i = 0;
    while (str[i] != '\0') // 널캐릭터가 아니라면 반복
    { 
        i++;
    }
    return str[i - 1]; // 마지막 문자 반환
}

int main() 
{
    char arr[3][10];

    for (int i = 0; i < 3; i++) 
    {
        cin >> arr[i];
    }

    // 각 문장의 마지막 문자 출력
    for (int i = 0; i < 3; i++) 
    {
        cout << findChar(arr[i]);
    }

    return 0;
}