#include <iostream>

struct Node
{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void AddNode(int data)
{
    if (head == nullptr)
    {
        head = new Node; // 헤드에 동적할당 (힙 영역)
        head->data = data; 
        head->next = nullptr;

        tail = head;
    }
    else
    {
        tail->next = new Node;
        tail->next->data = data;
        tail->next->next = nullptr;

        tail = tail->next;
    }
}

int main()
{
    AddNode(3);
    AddNode(4);
    AddNode(5);

    //Node* p = head;
    //while (true)
    //{
    //    if (p == nullptr)
    //        break;

    //    std::cout << p->data;
    //    p = p->next;
    //}

    // 위 while문과 동일한 기능
    for (Node* p = head; p != nullptr; p = p->next)
    {
        std::cout << p->data;
    }

    return 0;
}