#include <iostream>

// 해시 함수
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
    // 패턴 찾기 (함수 이용)
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
        std::cout << "해당하는 패턴 발견";
    }
    else
    {
        std::cout << "패턴 발견하지 못함";
    }

  
    // DAT(Direct Addressing Table) - Hash Table

    // 값 자체를 Index로 활용해서 사용하겠다.
    int bucket[256] = {};

    char str[7] = "ADBFAD";

    for (size_t i = 0; i < 6; i++)
    {
        bucket[str[i]]++;
    }

    // 해시함수의 원리
    //int index = hashFunction('A');
    //bucket[index] += 1;
    
    // 사용된 알파벳 종류
    //for (int x = 0; x < 256; x++)
    //{
    //    if (bucket[x] != 0)
    //    {
    //        std::cout << (char)x; 
    //    }
    //}

    // 사용된 문자의 개수 출력하는 경우
    //for (int x = 0; x < 256; x++)
    //{
    //    if (bucket[x] != 0)
    //    {
    //        std::cout << (char)x << " : " << bucket[x] << "개" << std::endl;
    //    }
    //}


    // 개수만큼 해당 문자를 출력하면 정렬로도 활용 가능.
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