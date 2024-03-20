#include <bits/stdc++.h>
using namespace std;



int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    memset (arr, 0, sizeof (arr));
    int count = 0;
    int top = 0;
    int right = n  - 1;
    int bot = m - 1;
    int left = 0;
   // while (count != m*n)
    while (count < m*n)
    {
        for (int i = left; i < n; i++)
        {
            if (arr[top][i] == 0)
            {
                count ++;
                arr[top][i] = count;
            }
        }
        top++;
        for (int i = top - 1; i < m; i ++)
        {
            if (arr[i][right] == 0)
            {
                count ++;
                arr[i][right] = count;
            }
        }
        right--;
        for (int i = right; i >= 0; i --)
        {
            if (arr[bot][i] == 0)
            {
                count++;
                arr[bot][i] = count;
            }
        }
        bot--;
        for (int i = bot; i >= 0; i --)
        {
            if (arr[i][left] == 0)
            {
                count++;
                arr[i][left] = count;
            }
        }
        left++;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j ++)
        {
            cout << setw (3) << arr[i][j];
        }
        cout << endl;
    }
}