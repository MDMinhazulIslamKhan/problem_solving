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
        vector<int>a(n);
        vector<int>b(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i <= n; i++)
        {
            cin >> b[i];
        }
        long long int ans = 0;
        long long mini = 1e18;
        for (int i = 0; i < n; i++)
        {
            ans += abs(a[i] - b[i]);
            long long int mn = min(a[i], b[i]);
            long long int mx = max(a[i], b[i]);
            if (b.back() >= mn && b.back() <= mx) {
                mini = 0;
            }
            else {
                mini = min(mini, 1ll * abs(b.back() - a[i]));
                mini = min(mini, 1ll * abs(b.back() - b[i]));
            }
        }
        cout << ans + mini + 1 << endl;
    }

    return 0;
}