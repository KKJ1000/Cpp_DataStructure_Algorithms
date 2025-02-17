#include <iostream>

int main()
{
    // 포인터 복습
    // 숫자를 저장할 수 있는 타입 -> int..
    // 글자를 저장할 수 있는 타입 -> char
    // *주소값을 저장할 수 있는 타입* -> pointer(포인터)

    // 주소값은 숫자여서 사실 int에 저장해도 상관이 없다.
    int addressNumber = 0;
    int a = 0;
    addressNumber = (int)&a;

    // 포인터 변수는 *을 찍어서
    // 해당 주소에 위치(변수)로 이동 할 수 있다.
    // 또는 가르킨다 라고 한다.

    // 구조체 포인터 선언
    struct Vector2
    {
        int x;
        int y;
    };

    Vector2 p1;
    
    Vector2* vp = &p1;
    (*vp).x = 100;
    (*vp).y = 100;

    // *(vp.x) = 200; 
    // *vp에 괄호를 치지않으면
    // .연산자가 *연산자보다 우선순위가 높기 때문에
    // 구조체 변수에 접근 할 수 없다.

    // -> 포인터 연산자
    vp->x = 100;

    return 0;
}