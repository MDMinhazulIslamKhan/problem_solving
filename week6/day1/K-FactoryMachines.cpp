#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    auto ok = [&](long long s)
    {
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (s / arr[i]);
        }
        return total >= t;
    };

    long long l = 1, mid, r = 1e18, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}