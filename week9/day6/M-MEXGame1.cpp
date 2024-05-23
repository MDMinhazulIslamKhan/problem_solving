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
        vector<int> f(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
            f[inp[i]]++;
        }

        int ans = n, count = 0;
        for (int i = 0; i <= n; i++)
        {
            if (f[i] == 1) {
                count++;
            }

            if (count == 2 || !f[i])
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}