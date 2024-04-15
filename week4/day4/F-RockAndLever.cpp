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
        // int arr[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        // }
        // int ans = 0;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if ((arr[i] & arr[j]) >= (arr[i] ^ arr[j]))
        //         {
        //             ans++;
        //         }
        //     }
        // }
        // cout << ans << endl;

        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count[__lg(x)]++;
        }

        long long ans = 0;
        for (auto it = count.begin(); it != count.end(); ++it)
        {
            int y = it->second;
            ans += (1LL * y * (y - 1)) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}