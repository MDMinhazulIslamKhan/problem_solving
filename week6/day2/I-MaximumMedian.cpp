#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    auto ok = [&](long long int m)
    {
        long long int position = n / 2, op = k;
        while (position < n)
        {
            op -= (m - arr[position]);
            position++;
            if (op < 0)
            {
                return false;
            }
        }
        return true;
    };
    long long int r = 1e18, l = 1, ans, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;

    return 0;
}
