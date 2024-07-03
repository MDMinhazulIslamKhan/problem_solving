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
        vector<long long int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<long long int, int> cnt;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += cnt[a[i]];
            if (a[i] == 1)
                ans += cnt[2];
            if (a[i] == 2)
                ans += cnt[1];
            cnt[a[i]]++;
        }

        cout << ans << endl;
    }

    return 0;
}