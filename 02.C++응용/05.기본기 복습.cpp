#include <iostream>

int getSum(int* arr, int index, int arrSize)
{
    int sum = 0;
    for (size_t i = index; i < arrSize; i++)
    {
        sum += arr[index];
    }

    return sum;
}

int isSame(char* strA, char* strB)
{
    for (size_t i = 0; i < 256; i++)
    {
        if (strA[i] != strB[i])
        {
            return -1;
        }
    }

    return 1;
}

int main()
{
    // 비트배열을 이용하여 마스킹 해보기
    // 1인 부분의 숫자만 빼와서 다른 배열에 넣기 {5 0 2 6 0 4}
    int vect[6] = { 5, 1, 2, 6, 7, 4 };
    int mask[6] = { 1, 0, 1, 1, 0 ,1 };
    int result[6] = {};

    for (size_t i = 0; i < 6; i++)
    {
        if (mask[i] == 1)
        {
            result[i] = vect[i];
        }
    }

    // 다중 count
    //int count = 0;
    //int arr[5] = { 1,5,1,5,3 };
    //int finds[3] = { 1,2,3 };

    //for (size_t y = 0; y < 3; y++)
    //{
    //    count = 0;
    //    for (size_t x = 0; x < 5; x++)
    //    {
    //        if (arr[x] == finds[y]) 
    //        {
    //            count++;
    //        }
    //    }
    //    std::cout << count;
    //}

    // 다중 flag
    int flag = 0;
    int arr[5] = { 1,5,1,5,3 };
    int finds[3] = { 1,2,3 };

    for (size_t y = 0; y < 3; y++)
    {
        flag = 0;
        for (size_t x = 0; x < 5; x++)
        {
            if (arr[x] == finds[y])
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 1)
        {
            std::cout << finds[y] << "찾았다";
        }
        else
        {
            std::cout << finds[y] << "못찾았다";
        }
    }


    // BaseIndex, offsetIndex 개념 설명
     // BaseIndex는 기준이 되는 인덱스로, 현재 위치를 의미
     // OffsetIndex는 BaseIndex로부터 얼마나 떨어져 있는지를 나타낸다.
     // BaseIndex = 2, Offset = 3이라고 하면 최종 인덱스는 BaseIndex + OffsetIndex = 2 + 3 = 5
     // 정리하자면 BaseIndex는 기준이 되는 인덱스이고, Offset은 BaseIndex로부터 떨어진 거리이다.
     // 최종 위치는 BaseIndex + OffsetIndex로 계산된다.
    

    // getSum(int index) 함수 만들기
    int arrB[9] = { 4,3,5,1,7,5,6,8,2 };
    getSum(arrB, 2, 9);

    // IsSame(); 함수 만들기
    char strA[256] = "Hello";
    char strB[256] = "Hello";

    if (isSame(strA, strB))
    {
        std::cout << "같다";
    }

    return 0;
}