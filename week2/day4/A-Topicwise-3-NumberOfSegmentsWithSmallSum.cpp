#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0, sum = 0, ans = 0;

    while (r < n)
    {
        sum += arr[r];
        if (sum > s)
        {
            sum -= arr[l];
            l++;
        }
        else if (r - l > 0)
        {
            int count = ((r - l + 1) * (r - l + 1 + 1)) / 2;
            ans += count;
        }

        r++;
    }
    cout << ans;

    return 0;
}