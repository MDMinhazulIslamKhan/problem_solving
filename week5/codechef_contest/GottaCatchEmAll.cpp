#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, ans = 0;
        cin >> n >> x >> y;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            int difficulty;
            cin >> difficulty;
            if (x * difficulty > y)
            {
                ans += y;
            }
            else
            {
                ans += (x * difficulty);
            }
        }
        cout << ans << endl;
    }

    return 0;
}