#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    char m;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (i != n - 1)
        {
            cin >> m;
        }
        sum += arr[i];
    }
    sum /= n;
    float x = 0;
    for (int i = 0; i < n; i++)
    {
        x += pow(abs(arr[i] - sum), 2);
    }
    x /= n;
    cout << sum << endl
         << x;
}