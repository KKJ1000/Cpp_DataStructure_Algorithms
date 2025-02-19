#include <iostream>

// 템플릿
// 템플릿 함수
template <typename T>
T Add(T a, T b)
{
    return a + b;
}

// 특정 자료형에 대해서 템플릿 제외할 수 있다.
// 템플릿 특수화
template <>
int Add(int a, int b)
{
    return a + b;
}

// 템플릿 클래스
template <typename T>
class Node
{
public:
    T data;
    Node* next;
};

int main()
{
    int ret = Add<int>(3, 5);
    float fret = Add<float>(3.1f, 5.2f);

    Node<float> fNode;
    fNode.data = 3.0f;
    Node<int> iNode;
    iNode.data = 5;

    return 0;
}