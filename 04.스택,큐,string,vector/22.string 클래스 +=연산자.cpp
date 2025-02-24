#include <iostream>
#include <cstring>

namespace ya
{
    class string
    {
    public:
        string()
            : mStr(nullptr), mLen(0) // 초기화(멤버 이니셜라이저)
        {
        }
        string(const char* str)
            : mStr(nullptr), mLen(0)
        {
            int len = strlen(str);
            mLen = len;
            mStr = new char[mLen + 1];

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

        void operator+=(const char* str)
        {
            int newLen = mLen + strlen(str);
            char* newStr = new char[newLen + 1];

            int index = 0;

			for (size_t i = 0; i < mLen - 1; i++)
			{
				newStr[index++] = mStr[i];
			}

            for (size_t i = 0; i <= strlen(str); i++)
            {
                newStr[index++] = str[i];
            }

            char* deleteStr = mStr;
            mStr = newStr;

            delete deleteStr;
            mLen = newLen;
        }

        int length()
        {
            return mLen;
        }

        void erase()
        {
            for (size_t i = 0; i < mLen; i++)
            {
                mStr[i] = 0;
            }
        }

    private:
        char* mStr;
        int mLen;
    };
}

int main()
{
    ya::string yaHello = "Hello";
    yaHello += "World";
    yaHello.length();

    return 0;
}
