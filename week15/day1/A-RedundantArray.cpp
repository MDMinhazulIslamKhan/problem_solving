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
        int arr[n];
        map<int, int> mp;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        long long int mn = INT_MAX;
        for (auto it : mp) {
            mn = min(mn, (1ll * n - it.second) * it.first);
        }
        cout << min(mn, 1ll * n) << endl;
    }

    return 0;
}