#include <iostream>

// ���ø�
// ���ø� �Լ�
template <typename T>
T Add(T a, T b)
{
    return a + b;
}

// Ư�� �ڷ����� ���ؼ� ���ø� ������ �� �ִ�.
// ���ø� Ư��ȭ
template <>
int Add(int a, int b)
{
    return a + b;
}

// ���ø� Ŭ����
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