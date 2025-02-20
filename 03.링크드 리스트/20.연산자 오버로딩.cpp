#include <iostream>

struct Point
{
    int x;
    int y;

    Point operator+(Point other)
    {
        Point result;
        result.x = x + other.x;
        result.y = y + other.y;

        return result;
    }

    Point operator-(Point other)
    {
        Point result;
        result.x = x - other.x;
        result.y = y - other.y;

        return result;
    }

    bool operator<(Point other)
    {
        return (x < other.x && y < other.y);
    }
};

int main()
{
    Point p1;
    p1.x = 1;
    p1.y = 1;

    Point p2;
    p2.x = 3;
    p2.y = 1;

    Point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    p3 = p1.operator+(p2);
    p3 = p1.operator-(p2);

    if (p1 < p2)
    {
        int a = 0;
    }

    return 0;
}