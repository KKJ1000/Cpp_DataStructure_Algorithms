#include <iostream>
using namespace std;

// 연산자 오버로딩
// 함수의 이름 대신 여러가지 기호를 사용할 수 있다.
struct Vector2
{
    int x;
    int y;

    Vector2(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    Vector2 operator+(Vector2 other)
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator-(Vector2 other)
    {
        return Vector2(x - other.x, y - other.y);
    }
};

int main()
{
    Vector2 pos1(2, 1);

    Vector2 pos2(2, 2);

    Vector2 ret = pos1 + pos2;  
    //ret = pos1.operator+(pos2); // 위아래 똑같다.
    ret = pos2 - pos1;

    //Vector2 ret(pos1.x + pos2.x, pos1.y + pos2.y);

    return 0;
}