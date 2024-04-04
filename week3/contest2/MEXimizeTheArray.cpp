#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        long long int ans = 0;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != j)
            {
                ans += abs(1ll * arr[j] - j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}