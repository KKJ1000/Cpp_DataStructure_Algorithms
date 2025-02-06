#include <iostream>

// 재귀 함수란?
// 함수가 자기 자신을 호출하는 것
// 코드 재활용 -> 함수 호출 (호출 스택에 같은 이름의 새로운 함수가 생성)

int arr[5] = { 5,7,1,2,3 };

void test(int x)
{
    // 무한정 호출되는 함수를 방지해야 하는게 급선무이다.
    if (x == 5)
    {
        return;
    }
    std::cout << arr[x];
    test(x + 1);
}

int main()
{
    test(0);
    
    return 0;
}