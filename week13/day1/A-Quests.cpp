#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, c, d;
        cin >> n >> c >> d;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());


        long long int maxi = arr[0];

        if (maxi * d < c)
        {
            cout << "Impossible" << endl;
            continue;
        }

        auto ok = [&](long long int k)
            {
                int D = d, C = 0;

                long long int x = 0;
                while (D--)
                {
                    if (x < n)
                    {
                        C += arr[x];
                    }
                    x++;

                    if (x > k) {
                        x = 0;
                    }

                    if (C >= c)
                        return true;
                }

                return false;
            };

        long long int ans = 0;
        long long int left = 0, right = INT_MAX, mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (ok(mid))
                ans = mid, left = mid + 1;
            else
                right = mid - 1;
        }

        if (ans >= INT_MAX)
        {
            cout << "Infinity" << endl;
            continue;
        }

        cout << ans << endl;
    }

    return 0;
}