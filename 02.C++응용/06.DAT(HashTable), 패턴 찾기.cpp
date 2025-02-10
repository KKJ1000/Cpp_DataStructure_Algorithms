#include <iostream>

// �ؽ� �Լ�
int hashFunction(char ch)
{
    return ch * 2 + 1 / 2 * 0.7;
}

char vect[10] = "BTABCQABC";
char pattern[4] = "ABC";

int isPattern(int index)
{
    for (size_t i = 0; i < 3; i++)
    {
        if (pattern[i] != vect[index + i]) 
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // ���� ã�� (�Լ� �̿�)
    int result = 0;
    for (size_t i = 0; i < 7; i++)
    {
        result = isPattern(i);
        if (result == 1)
        {
            break;
        }
    }

    if (result == 1)
    {
        std::cout << "�ش��ϴ� ���� �߰�";
    }
    else
    {
        std::cout << "���� �߰����� ����";
    }

  
    // DAT(Direct Addressing Table) - Hash Table

    // �� ��ü�� Index�� Ȱ���ؼ� ����ϰڴ�.
    int bucket[256] = {};

    char str[7] = "ADBFAD";

    for (size_t i = 0; i < 6; i++)
    {
        bucket[str[i]]++;
    }

    // �ؽ��Լ��� ����
    //int index = hashFunction('A');
    //bucket[index] += 1;
    
    // ���� ���ĺ� ����
    //for (int x = 0; x < 256; x++)
    //{
    //    if (bucket[x] != 0)
    //    {
    //        std::cout << (char)x; 
    //    }
    //}

    // ���� ������ ���� ����ϴ� ���
    //for (int x = 0; x < 256; x++)
    //{
    //    if (bucket[x] != 0)
    //    {
    //        std::cout << (char)x << " : " << bucket[x] << "��" << std::endl;
    //    }
    //}


    // ������ŭ �ش� ���ڸ� ����ϸ� ���ķε� Ȱ�� ����.
    for (size_t i = 0; i < 256; i++)
    {
        if (bucket[i] != 0)
        {
            for (size_t j = 0; j < bucket[i]; j++)
            {
                std::cout << (char)i;
            }
        }
    }



    return 0;
}