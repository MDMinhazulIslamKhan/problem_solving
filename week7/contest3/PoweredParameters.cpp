// not solved ==> tle
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        float arr[n], mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }

        long long int p;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                p = pow(arr[i - 1], 1.0 * j);
                if (p > mx)
                {
                    break;
                }
                if (p <= arr[j - 1])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}