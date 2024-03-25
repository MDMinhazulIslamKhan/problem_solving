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
    int l = 0, r = 0, ans = 0;
    long long int sum = 0;
    while (r < n)
    {
        sum += inp[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum = sum - inp[l];
            l++;
        }
        r++;
    }
    cout << ans;
    return 0;
}