#include <bits/stdc++.h>

using namespace std;

bool check(long long int m, long long int n, long long int k) {
    long long int d = n - m;
    long long int c = (d * (d + 1)) / 2;

    long long int r = c - k;
    return r >= m;
};

int main()
{
    long long int n, k;
    cin >> n >> k;



    long long int l = 1, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (check(mid, n, k))
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