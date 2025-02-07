#include <iostream>
// 재귀함수 탐색 경로 기록
// DFS : Depth First Search - 깊이 우선 탐색

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
        path[level] = 'A' + i; // A 아스키코드 + 1 = B 위 주석과 동일한 결과
        run(level + 1);
        path[level] = 0;
    }
}

int main()
{
    run(0);

    return 0;
}