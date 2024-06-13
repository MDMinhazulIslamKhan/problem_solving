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

        map<long long int, long long int> mp;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            mp[x]++;
        }

        long long int most = 0;

        for (auto x : mp)
        {
            most = max(most, x.second);
        }

        long long int ans;
        if (most <= n / 2) {
            cout << n % 2 << endl;
        }
        else {
            cout << 2 * most - n << endl;
        }
    }

    return 0;
}