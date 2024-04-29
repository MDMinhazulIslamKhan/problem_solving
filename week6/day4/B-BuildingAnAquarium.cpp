#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int l = 1, r = 1e10, mid, ans;
        while (l <= r)
        {
            mid = (l + r) / 2;

            long long int w = 0;
            for (int i = 0; i < n; i++)
            {
                if (mid > arr[i])
                    w += (mid - arr[i]);
            }

            if (w <= x)
                ans = mid, l = mid + 1;
            else
                r = mid - 1;
        }

        cout << ans << endl;
    }

    return 0;
}