#include <iostream>
using namespace std;

// �������� 1��
// �� ������ 2�� �迭(3 x 10)�� �Է� �޾��ּ���
// �� ������ �� ������ ���ڵ��� ����Ͻø� �˴ϴ�
// �� ���� ������ ���ڸ� ã�� �Լ��� ���� Ǯ���ּ���.
// �Լ� ���� : char findChar(char* str) �� ���� ���·� �ۼ��Ͽ� Ǯ���ֽø� �˴ϴ�.

// �Է� ����
// MINCODING
// APPLE
// SKTOWN
// ��� GEN

char findChar(char* str) 
{
    int i = 0;
    while (str[i] != '\0') // ��ĳ���Ͱ� �ƴ϶�� �ݺ�
    { 
        i++;
    }
    return str[i - 1]; // ������ ���� ��ȯ
}

int main() 
{
    char arr[3][10];

    for (int i = 0; i < 3; i++) 
    {
        cin >> arr[i];
    }

    // �� ������ ������ ���� ���
    for (int i = 0; i < 3; i++) 
    {
        cout << findChar(arr[i]);
    }

    return 0;
}