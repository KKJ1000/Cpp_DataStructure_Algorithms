#include <iostream>

void run(int now, int level);
void run1D(int now);

// 트리
// char value[6] = "TBECD";

// 그래프
char value[6] = "TEQWA";
char path[6] = "";


// 트리
//int map[5][5] = {
//    0,1,1,0,0,
//    0,0,0,1,1,
//    0,0,0,0,0,
//    0,0,0,0,0,
//    0,0,0,0,0,
//};

int map[5][5] = {
    0,1,0,0,0,
	0,0,1,1,0,
	0,0,0,0,0,
	1,0,0,0,1,
	0,0,0,0,0,
};

int visited[5] = {};

char map1D[7] = " TBECD";

int main()
{
    // 그래프와 트리를 순회하기 위해서는 반복문이 아닌
    // 특정 알고리즘이 필요하다.

    // DFS Depth First Search(깊이 우선 탐색)
    // 재귀 호출, 스택을 사용하여 노드를 탐색한다.
    // 노드를 깊숙히 안쪽으로 들어가면서 탐색한다.

    // BFS Breadth First Search(너비 우선 탐색)
    // 큐를 이용하여, 노드를 탐색한다. 
    // 노드의 레벨 또는 너비를 우선적으로 탐색한다.
    
    path[0] = 'T';
    run(0, 0);
    //run1D(1);
    return 0;
}

void run(int now, int level)
{
    std::cout << value[now];

    for (size_t i = 0; i < 5; i++)
    {
        // 그래프 코드 visited[i] == 0 조건, visited[i] = 1; 추가
        if (map[now][i] == 1 && visited[i] == 0)
        {
            path[level + 1] = value[i];
            visited[i] = 1;
            run(i, level + 1);
            path[level + 1] = 0;
        }
    }
}

void run1D(int now)
{
    if (now >= 7 || map1D[now] == ' ')
    {
        return;
    }
    std::cout << map1D[now];
    run1D(now * 2);
    run1D(now * 2 + 1);
}
