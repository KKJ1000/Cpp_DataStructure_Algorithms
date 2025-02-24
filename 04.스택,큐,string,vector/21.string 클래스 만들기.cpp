#include <iostream>
#include <list>
#include <cstring>

namespace ya
{
    class string
    {
    public:
        string()
            : mStr(nullptr) // 초기화(멤버 이니셜라이저)
        {

        }
        string(const char* str)
            : mStr(nullptr) // 초기화(멤버 이니셜라이저)
        {
            int len = strlen(str);
            mStr = new char[len + 1];

            for (size_t i = 0; i < len; i++)
            {
                mStr[i] = str[i];
            }

            mStr[len] = '\0';
        }
        ~string()
        {
            delete[] mStr;
        }
    private:
        char* mStr;
    };
}

int main()
{
    std::string hello = "Hello!";

    std::cout << hello;

    // ya::string yaHello;
    ya::string yaHello = "Hello";
    return 0;
}