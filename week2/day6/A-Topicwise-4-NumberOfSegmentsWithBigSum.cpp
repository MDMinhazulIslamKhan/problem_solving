#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    long long int sum = 0, ans = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum < s)
        {
            // cout << "no " << l << " " << r << " " << sum << endl;
            r++;
        }
        else
        {
            ans += (n - r);
            // cout << l << " " << r << " " << sum << " " << n - r << endl;
            sum -= arr[l];
            sum -= arr[r];
            l++;
        }
    }
    cout << ans;
    return 0;
}