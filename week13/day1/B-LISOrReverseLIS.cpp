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
        map<long long int, int> mp;

        long long int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }

        int a = 0, b = 0;
        for (auto x : mp)
        {
            if (x.second >= 2) {
                b++;
            }
            else {
                a++;
            }
        }

        int ans = b + (a + 1) / 2;
        cout << ans << endl;
    }

    return 0;
}