#include <iostream>

// ���� ã��� ��
int map[5][5] =
{
    1,3,5,1,5,
    3,7,9,5,8,
    4,5,3,9,7,
    2,7,6,1,9,
    1,6,2,3,8,
};

int pattern[2][2] =
{
    3,5,
    7,9
};

int isPattern(int dy, int dx)
{
    for (size_t y = 0; y < 2; y++)
    {
        for (size_t x = 0; x < 2; x++)
        {
            if (map[dy + y][dx + x] != pattern[y][x]) 
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    // ������ ǥ���ϱ� ���� �ڵ� ���

    int arr[3][3] =
    {
        1,2,3,
        4,5,6,
        7,8,9,
    };

    int direct[4][2] =
    {
        -1,0,
        1,0,
        0,-1,
        0,1,
    };

    int x = 1;
    int y = 1;

    int sum = 0;
    for (size_t i = 0; i < 4; i++)
    {
        int newX = x + direct[i][1];
        int newY = y + direct[i][0];

        if (newX >= 0 && newX <= 2 && newY >= 0 && newY <= 2)
        {
            sum += arr[newY][newX];
        }
    }

    // 2�� ������ ����
    // ������ ���� = �ּҰ��� �����ϴ� ���� Ÿ��
    int a = 100;
    int* p = &a;
    int** pp = &p;
    
    *(*pp) = 200;

    // ����ü, Ŭ������ �̿��� �迭
    struct ABC
    {
        int a;
        int b;
    };
    ABC array[3];
    array[0].a = 100;


    // ����ã�� -> 2�� for������ ���� ã��
    for (size_t y = 0; y < 4; y++)
    {
        for (size_t x = 0; x < 4; x++)
        {
            int ret = isPattern(y, x);
            if (ret == 1)
            {
                // �����Ѵ�.
                int a = 0;
            }
        }
    }

    return 0;
}