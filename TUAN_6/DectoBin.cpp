#include <bits/stdc++.h>
using namespace std;

string convert(int num)
{
    string bin = "";
    int temp = num;

    while (temp > 0)
    {
        bin += (temp % 2 == 0) ? '0' : '1';
        temp /= 2;
    }

    reverse(bin.begin(), bin.end());
    return bin;
}

int main()
{
    int n;
    cin >> n;
    cout << convert(n) << endl;
}