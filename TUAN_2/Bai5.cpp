#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mt[n][n] = {0};
    for (int j = 0; j < n; j ++)
    {
        for (int i = 0; i < n; i ++)
        {
            mt[j][i] = (i+j+1)%n;
            if (mt[j][i] == 0)
            {
                mt[j][i]+=n;
            }
        }
    }
    for (int i = 0; i < n ; i ++)
    {
        for (int j = 0; j < n ; j++)
        {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
}