#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (i < (n / 2))
            {
                ans -= arr[i];
            }
            else
            {
                ans += arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}