#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    while (a >= 0)
    {
        int b = a;
        cin >> a;
        if (a == b)
        {
            continue;
        }
        else{
            cout << a << " ";
        }
    }
}