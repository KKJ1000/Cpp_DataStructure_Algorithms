#include <iostream>

int main()
{
    // cstring ���̺귯��
    char nameA[10] = "ABC";
    char nameB[10] = "ABC";
    char nameC[10] = "";

    // ���ڿ� �� �ϴ� �Լ� : ������ 0�� ��ȯ
    if (strcmp(nameA, nameB) == 0)
    {
        int a = 0;
    }

    // ���ڿ� ���� ���ϴ� �Լ�
    int len = strlen(nameA);

    // ���ڿ� ���� �Լ� (������ ��ġ, ������ �ҽ�)
    strcpy_s(nameC, nameA);

    return 0;
}