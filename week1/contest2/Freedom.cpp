#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int inp[n];
        for (int j = 0; j < n; j++)
        {
            cin >> inp[j];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int a = abs(inp[i] - inp[j]);
                long long int b = inp[i] + inp[j];
                long long int c = inp[i] * inp[j];

                if (c - b == b - a)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}
