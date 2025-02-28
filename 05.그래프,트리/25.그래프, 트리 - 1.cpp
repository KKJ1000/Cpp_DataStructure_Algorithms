#include <iostream>

// 자료 구조 : 그래프
// 노드를 다양한 방법으로 연결해서 관계를 표현하는 자료구조
// 일반적으로 탐색을 하기 위해서는
// 반복문 같은 프로그래밍 문법이 아닌 (DFS, BFS) 알고리즘을 사용해야한다.

int main()
{
    int map[4][4] =
    {
        0,0,1,1,
        1,0,1,1,
        0,1,0,0,
        0,0,0,0,
    };

    int targetNode = 1;
    for (int i = 0; i < 4; i++)
    {
        if (map[targetNode][i] != 0)
        {
            std::cout << i << "번";
        }
    }

    return 0;
}
