#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1][n + 1] = {0};

    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            cout << setw(3) << arr[line][i];
        }
        cout << endl;
    }
    return 0;
}