#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int inp[n];
        for (int i = 0; i < n; i++)
            cin >> inp[i];

        int ans = 1e9, current;
        for (int i = 0; i < n; i++)
        {
            current = 0;
            if (i < n - 1)
                current = abs(inp[i] - inp[i + 1]);
            if (i > 0)
                current = max(current, abs(inp[i] - inp[i - 1]));
            ans = min(ans, current);
        }

        cout << ans << endl;
    }

    return 0;
}