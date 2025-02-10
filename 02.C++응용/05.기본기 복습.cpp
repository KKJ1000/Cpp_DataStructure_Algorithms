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
    // ��Ʈ�迭�� �̿��Ͽ� ����ŷ �غ���
    // 1�� �κ��� ���ڸ� ���ͼ� �ٸ� �迭�� �ֱ� {5 0 2 6 0 4}
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

    // ���� count
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

    // ���� flag
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
            std::cout << finds[y] << "ã�Ҵ�";
        }
        else
        {
            std::cout << finds[y] << "��ã�Ҵ�";
        }
    }


    // BaseIndex, offsetIndex ���� ����
     // BaseIndex�� ������ �Ǵ� �ε�����, ���� ��ġ�� �ǹ�
     // OffsetIndex�� BaseIndex�κ��� �󸶳� ������ �ִ����� ��Ÿ����.
     // BaseIndex = 2, Offset = 3�̶�� �ϸ� ���� �ε����� BaseIndex + OffsetIndex = 2 + 3 = 5
     // �������ڸ� BaseIndex�� ������ �Ǵ� �ε����̰�, Offset�� BaseIndex�κ��� ������ �Ÿ��̴�.
     // ���� ��ġ�� BaseIndex + OffsetIndex�� ���ȴ�.
    

    // getSum(int index) �Լ� �����
    int arrB[9] = { 4,3,5,1,7,5,6,8,2 };
    getSum(arrB, 2, 9);

    // IsSame(); �Լ� �����
    char strA[256] = "Hello";
    char strB[256] = "Hello";

    if (isSame(strA, strB))
    {
        std::cout << "����";
    }

    return 0;
}