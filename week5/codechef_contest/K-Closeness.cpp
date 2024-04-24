// not solved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, mn = INT_MAX, mx = INT_MIN;
        cin >> n >> k;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int diff = mx - arr[i];
            int canIncrease = (diff / k) * k;
            bool canChange = false;
            // cout << diff << " " << mn << " " << mx << " " << arr[i] << endl;

            if (mx - (arr[i] + canIncrease) > (arr[i] + k + canIncrease) - mx)
            {
                cout << 1 << " => ";
                mn = min(mx, mn);
                mx = (arr[i] + k + canIncrease);
            }
            else
            {
                cout << 2 << " => ";
                mn = min(mx, arr[i] + canIncrease);
            }
            cout << canIncrease << " " << mn << " " << mx << " " << endl;
        }
        // cout << mx - mn << endl;
    }

    return 0;
}
