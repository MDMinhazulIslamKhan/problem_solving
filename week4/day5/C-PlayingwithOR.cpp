#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l = 0, r = k - 1, ans = 0;
        while (l < n && r < n)
        {
            bool flag = false;
            for (int i = l; i <= r; i++)
            {
                // cout << arr[i] << " ";
                if ((arr[i] & 1) == 1)
                {
                    flag = true;
                    break;
                    // cout << "p ";
                }
            }
            // cout << endl;
            if (flag)
            {
                ans++;
            }
            l++;
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}
