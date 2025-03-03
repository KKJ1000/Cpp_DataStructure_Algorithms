#include <iostream>
#include <queue>

int map[5][5] = 
{
    {0,1,0,1,1},
    {0,0,1,1,0},
    {0,0,0,0,0},
    {0,0,0,0,1},
    {0,0,0,0,0},
};

char value[6] = { 'E','B','R','A', 'Y' };

struct Node
{
    int num;
    int level;
};

std::queue<Node> queue = {};
int used[6] = {};

int main()
{
    queue.push(Node{ 0, 0 });
    used[0] = 1;

    while (!queue.empty())
    {
        Node now = queue.front();

        std::cout << value[now.num] << std::endl;
        std::cout << "-----------" << std::endl;
        for (int i = 0; i < 5; i++)
        {
            if (used[i] == 1)
                continue;
            if (map[now.num][i] == 0)
                continue;

            used[i] = 1;
            queue.push(Node{ i, now.level + 1 });
        }

        queue.pop();
    }

    return 0;
}