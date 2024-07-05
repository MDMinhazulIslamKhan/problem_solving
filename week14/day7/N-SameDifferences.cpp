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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] -= i;
        }


        long long int ans = 0;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            ans += cnt[a[i]];
            cnt[a[i]]++;
        }


        cout << ans << endl;
    }

    return 0;
}