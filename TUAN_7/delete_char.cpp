#include <bits/stdc++.h>
using namespace std;

char *delete_char(char *&a, char x)
{
    int len = strlen(a);
    char *v = new char[len + 1];
    int n = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != x)
        {
            v[n++] = a[i];
        }
    }
    v[n] = '\0';
    return v;
}

int main()
{
    char *a = new char[256];
    cin >> a;
    cout << delete_char(a, 'l');
    delete[] a;
    return 0;
}