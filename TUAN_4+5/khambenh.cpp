#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int time[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }
    sort(time, time + n, greater<int>());
    int waitTime[n] = {0};
    for (int i; i < n; i++)

    {
        waitTime[i] = waitTime[i - 1] + time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << time[i] << setw(3);
    }

    cout << endl
         << waitTime[n - 1];
}