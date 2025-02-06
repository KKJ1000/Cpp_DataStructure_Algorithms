#include <iostream>

// #pragma region "이름"
// 코드 접기 가능
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
    // 재귀 호출 깊이와 너비
    dfs(0);


    return 0;
}