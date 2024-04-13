#include <bits/stdc++.h>
using namespace std;

void print(int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << " ";
    }
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        print(i - 1, (n - i) * 2 + 1);
    }
}