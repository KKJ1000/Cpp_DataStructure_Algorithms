#include <iostream>

// #pragma region "�̸�"
// �ڵ� ���� ����
// #pragma endregion 

void dfs(int level)
{
    if (level == 3)
    {
        return;
    }

    dfs(level + 1);
    dfs(level + 1);
    std::cout << level;
}

int main()
{
    // ��� ȣ�� ���̿� �ʺ�
    dfs(0);


    return 0;
}