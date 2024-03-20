#include <bits/stdc++.h>
using namespace std;

int posX (int n, int lastX)
{
    lastX++;
    if (lastX == n)
    {
        lastX = 0;
    }
    return lastX;
}
int posY (int n, int lastY)
{
    lastY--;
    if (lastY < 0)
    {
        lastY = n - 1;
    }
    return lastY;
}

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    memset (arr, 0, sizeof(arr));
    int lastX = (n / 2);
    int lastY = 0;
    int count = 1;
    arr[lastY][lastX] = count;
    for (int i = 0; i < n*n; i++)
    {
        int x = posX (n, lastX);
        int y = posY (n, lastY);
        if (arr[y][x] == 0)
        {
            count++;
            arr[y][x] = count;
            lastX = x;
            lastY = y;
        }
        else
        {
            count++;
            arr[lastY+1][lastX] = count;
            lastX = lastX;
            lastY = lastY + 1;
        }
    }
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
}