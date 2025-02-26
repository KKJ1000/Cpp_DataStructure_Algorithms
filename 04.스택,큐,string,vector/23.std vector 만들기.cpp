#include <iostream>
#include <vector>
#include <assert.h>

namespace kj
{
    template <typename T>
    class vector
    {
    public:
        vector()
            : mArr(nullptr)
            , mSize(0)
            , mCapacity(0)
        {

        }

        ~vector()
        {
            delete[] mArr;
        }

        void reserve(size_t size)
        {
            mArr = new T[size];
            mCapacity = size;
        }

        void resize(size_t size)
        {
            if (size < mSize)
                return;

            reserve(size + (size / 2));
            mSize = size;

            memset(mArr, NULL, mCapacity);
        }

        void push_back(T& value)
        {
            if (mSize > mCapacity)
            {
                mCapacity *= 2;
                T* newArr = new T[mCapacity];
                //memcpy()
                for (size_t i = 0; i < mSize; i++)
                {
                    newArr[i] = mArr[i];
                }
                delete[] mArr;
                newArr[mSize++] = value;
                mArr = newArr;
            }
        }

        void pop_back()
        {
            mSize > 0 ? mSize -= 1 : mSize = NULL;
        }

        void clear()
        {
            mSize = 0;
        }

        T& operator[](size_t index)
        {
            if (mSize <= index)
            {
                assert(NULL);
            }

            return mArr[index];
        }

        int capacity()
        {
            return mCapacity;
        }

        int size()
        {
            return mSize;
        }

        bool empty()
        {
            return mSize == 0;
        }

        bool operator==(const vector& other) const
        {
            if (mSize != other)
                return false;

            for (size_t i = 0; i < mSize; i++)
            {
                if (mArr[i] != other[i])
                {
                    return false;
                }
            }
            return true;
        }

    private:
        T* mArr;
        unsigned int mCapacity;
        unsigned int mSize;
    };
}

int main()
{
    kj::vector<int> vector;

    return 0;
}
