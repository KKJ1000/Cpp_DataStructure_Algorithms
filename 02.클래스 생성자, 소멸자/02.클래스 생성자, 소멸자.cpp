#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    int b;

    // ��ü�� �����Ҷ� �ڵ����� ȣ�����ִ� �Լ��� �ִ�.
    // �����ڶ�� �Ѵ�.
	//Test() // Ŭ���� �̸��� �Ȱ��� �Լ�
	//{
	//    a = 0;
	//    b = 0;
	//}

    Test() 
        : a(0)
        , b(0) // ����̴ϼȶ�����
    {

    }

    Test(int num1, int num2) 
        : a(num1)
        , b(num2)
    {

    }

    ~Test() // �Ҹ���, �޸𸮿��� �����ɶ� ȣ��Ǵ� �Լ� ~ ǥ��
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