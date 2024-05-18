// unsolved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int inp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    if (n < 3) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (inp[i] + inp[j] + inp[k] == x) {
                    cout << i + 1 << " " << j + 1 << " " << k + 1;
                    return 0;
                }
            }

        }
    }
    cout << "IMPOSSIBLE";

    return 0;
}