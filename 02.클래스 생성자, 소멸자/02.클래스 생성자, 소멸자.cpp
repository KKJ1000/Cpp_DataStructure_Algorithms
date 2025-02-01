#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    int b;

    // 객체를 생성할때 자동으로 호출해주는 함수가 있다.
    // 생성자라고 한다.
	//Test() // 클래스 이름과 똑같은 함수
	//{
	//    a = 0;
	//    b = 0;
	//}

    Test() 
        : a(0)
        , b(0) // 멤버이니셜라이저
    {

    }

    Test(int num1, int num2) 
        : a(num1)
        , b(num2)
    {

    }

    ~Test() // 소멸자, 메모리에서 해제될때 호출되는 함수 ~ 표시
    {
        a = 0;
        b = 0;
    }
};

int main()
{
    Test test;
    //test.a = 0;
    //test.b = 0;

    Test test2(10, 20);
    //test2.a = 0;
    //test2.b = 0;

    return 0;
}