#include <iostream>
// ����Լ� Ž�� ��� ���
// DFS : Depth First Search - ���� �켱 Ž��

char path[10] = "";
void run(int level)
{
    if (level == 3)
    {
        std::cout << path;
        std::cout << std::endl;
        return;
    }

    //path[level] = 'A';
    //run(level + 1);
    //path[level] = 0;

    //path[level] = 'B';
    //run(level + 1);
    //path[level] = 0;

    for (size_t i = 0; i < 2; i++)
    {
        path[level] = 'A' + i; // A �ƽ�Ű�ڵ� + 1 = B �� �ּ��� ������ ���
        run(level + 1);
        path[level] = 0;
    }
}

int main()
{
    run(0);

    return 0;
}