#include <iostream>
#include <string>

class MyString
{
public:
    MyString(const char* str)
    {
        for (int i = 0; i < 256; i++)
        {
            this->str[i] = '\0';
        }

        for (int i = 0; i < 256; i++)
        {
            if (str[i] == '\0') 
            {
                len = i;
                break;
            }

            this->str[i] = str[i];
        }
    }

    int size()
    {
        return len + 1;
    }

    void operator+=(const char* str)
    {
        for (int i = len; i < 256; i++)
        {
            int index = 0;
            for (int i = len; i < 256; i++)
            {
                if (str[index] == '\0')
                {
                    break;
                }

                this->str[i] = str[index++];
            }
        }
    }

private:
    char str[256];
    int len = 0;
};

int main()
{
    std::string  str = "Hello";
    int len = str.size();
    str += " World";

    MyString str2 = "ABCD";
    len = str2.size();
    str2 += "EFG";

    return 0;
}