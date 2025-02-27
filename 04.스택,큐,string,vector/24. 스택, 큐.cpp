#include <iostream>
#include <stack>
#include <queue>

// 스택 (후입선출, LIFO)
// 1. 데이터 저장은 항상 위에 저장한다.
// 2. 읽기는 항상 제일 위에 있는 데이터를 읽는다.
// 3. 삭제는 항상 제일 위에 있는 데이터만 삭제할 수 있다.

// 큐 (선입선출, FIFO)
// 스택과 비슷한 자료구조이며 현업에서 많이 사용된다.
// 여러 함수에서 신호들이 한꺼번에 들어오면, 순차 처리를 위한
// 대기열 용도로 사용된다.

// 큐와 스택의 차이
// 스택은 pop할 때 가장 마지막에 들어온 값을 가장 먼저 제거한다.
// 큐는 pop할 때 가장 먼저 들어온 값을 가장 먼저 제거한다.


struct Node
{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void push(int value)
{
    Node* buff = new Node();
    buff->data = value;
    buff->next = head;
    head = buff;
}

void pop()
{
    Node* backup = head;
    head = head->next;
    delete backup;
}

int top()
{
    return head->data;
}

// Queue (위 코드에서 push 함수만 바꿔주면 Queue 자료구조가 된다.)
//void push(int value)
//{
//    if (head == nullptr)
//    {
//        Node* buff = new Node();
//        buff->data = value;
//        head = buff;
//        tail = buff;
//    }
//    else
//    {
//        tail->next = new Node();
//        tail = tail->next;
//        tail->data = value;
//    }
//}

int main()
{
    // push, pop
    return 0;
}
