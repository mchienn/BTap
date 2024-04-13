#include <bits/stdc++.h>
using namespace std;

bool checkSnt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (checkSnt(n))
    {
        for (int i = 2; i <= n; i++)
        {
            if (checkSnt(i))
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (checkSnt(i))
            {
                cout << i << " ";
            }
        }
    }
}