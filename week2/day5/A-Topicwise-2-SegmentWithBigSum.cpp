#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int s;
    cin >> n >> s;
    int inp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    int l = 0, r = 0, ans = INT_MAX;
    long long int sum = 0;
    while (r < n && l <= r)
    {
        sum += inp[r];
        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= inp[l];
            sum -= inp[r];
            l++;
        }
        else
        {
            r++;
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }

    return 0;
}