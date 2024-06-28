#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long int ans = 0;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i] / k;
            a[i] %= k;
        }
        sort(a.begin(), a.end());


        int j = 0;
        for (int i = n - 1; i > j; i--)
        {
            while (j < i && a[i] + a[j] < k)
            {
                j++;
            }
            if (i == j) {
                break;
            }
            ans++;
            j++;
        }

        cout << ans << endl;
    }

    return 0;
}