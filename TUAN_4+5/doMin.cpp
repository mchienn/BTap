#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    char arr[m+2][n+2];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {   
            char x; cin >> x;
            arr[i][j] = x;
        }
    }


    for (int i = 1; i <= m; i++)
    {
        for (int j = 1 ; j <= n; j++)
        {
            int count = 0;
            if (arr[i][j] == '.')
            {
                for (int x = i - 1; x <= i + 1; x ++)
                {
                    for (int y = j - 1; y <= j + 1; y ++)
                    {
//                       if (x == y) continue;
                        if (arr[x][y] == '*')
                        {
                            count ++;
                        }
                    }
                }

                arr[i][j] = '0' + count;
            }
        }
    }
    for (int i = 1; i <= m ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j]  << " ";

        }
        cout << endl;
    }
}