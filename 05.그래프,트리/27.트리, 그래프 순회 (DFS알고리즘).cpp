#include <iostream>

void run(int now, int level);
void run1D(int now);

// Ʈ��
// char value[6] = "TBECD";

// �׷���
char value[6] = "TEQWA";
char path[6] = "";


// Ʈ��
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
    // �׷����� Ʈ���� ��ȸ�ϱ� ���ؼ��� �ݺ����� �ƴ�
    // Ư�� �˰����� �ʿ��ϴ�.

    // DFS Depth First Search(���� �켱 Ž��)
    // ��� ȣ��, ������ ����Ͽ� ��带 Ž���Ѵ�.
    // ��带 ����� �������� ���鼭 Ž���Ѵ�.

    // BFS Breadth First Search(�ʺ� �켱 Ž��)
    // ť�� �̿��Ͽ�, ��带 Ž���Ѵ�. 
    // ����� ���� �Ǵ� �ʺ� �켱������ Ž���Ѵ�.
    
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
        // �׷��� �ڵ� visited[i] == 0 ����, visited[i] = 1; �߰�
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
