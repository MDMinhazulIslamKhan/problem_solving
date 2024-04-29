#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = INT_MAX;
        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;

            if (inp >= k)
            {
                possible = true;
                int remain = inp - (inp / k) * k;
                if (remain == 0)
                {
                    ans = 0;
                }
                else
                {
                    ans = min(ans, remain);
                }
            }
        }
        if (possible)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}