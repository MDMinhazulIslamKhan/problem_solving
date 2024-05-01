#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    auto ok = [&](int p)
    {
        if ((a / p) == 0 || (b / p) == 0)
            return false;

        int plates = (a / p) + (b / p);
        if (plates >= n)
        {
            return true;
        }
        else
            return false;
    };

    int ans = 0;
    int l = 1, r = max(a, b), mid;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans;

    return 0;
}