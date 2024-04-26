#include <bits/stdc++.h>
using namespace std;

void reverse(char *a)
{
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - i - 1]);
    }
}

int main()
{
    char *a = new char[256];
    cin >> a;
    reverse(a);

    cout << a;
    delete[] a;
    return 0;
}