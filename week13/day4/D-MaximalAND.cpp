#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int inp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }

        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            for (int j = 30; j >= 0; j--) {
                if ((inp[i] >> j) & 1)
                {
                    count[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (n - count[i] <= k)
            {
                ans += (1 << i);
                k -= (n - count[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}