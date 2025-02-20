#include <iostream>
#include <list>

namespace ya
{
    template <typename T>
    class list
    {
    public:
        struct Node
        {
            T data;
            Node* back;
            //Node* front;
        };

        list()
        {
            mHead = nullptr;
            mTail = nullptr;
        }

        void push_back(T data)
        {
            if (mHead == nullptr)
            {
                mHead = new Node();
                mHead->data = data;
                mHead->back = nullptr;
                //mHead->front = nullptr;
                mTail = mHead;
            }
            else
            {
                mTail->back = new Node();
                mTail->back->data = data;
                mTail->back->back = nullptr;
                //mTail->back->front = nullptr;

                mTail = mTail->back;
            }
        }
    private:
        Node* mHead;
        Node* mTail;
    };
}

int main()
{
    std::list<int> stlList;
    stlList.push_back(10);
    stlList.push_back(20);
    stlList.push_front(-10);


    ya::list<int> yaList;
    yaList.push_back(1);
    yaList.push_back(2);
    yaList.push_back(3);

    return 0;
}