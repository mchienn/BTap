#include <bits/stdc++.h>
using namespace std;

struct String_
{
    String_(char *str_)
    {
        strlength = strlen(str_);
        str = new char[strlength + 1];
        strcpy(str, str_);
    }
    ~String_()
    {
        delete[] str;
    }

    void print()
    {
        cout << str << endl;
    }

    void append(const char *addstr)
    {
        int templength = strlen(addstr);
        char *temp = new char[strlength + templength + 1];
        for (int i = 0; i < strlength + templength; i++)
        {
            if (i < strlength)
                temp[i] = str[i];
            else
                temp[i] = addstr[i - strlength];
        }
        temp[strlength + templength] = '\0';
        delete[] str;
        str = temp;
        delete[] temp;
    }

    int strlength;
    char *str;
};

int main()
{
    String_ str("Hello");
    str.print();
    str.append(" World");
    str.print();
    return 0;
}