#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int cycle = (n - 1) / 7;
        int currentDay = (n - 1) % 7;
        int ans = cycle;
        if (n <= 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (currentDay > 0)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}