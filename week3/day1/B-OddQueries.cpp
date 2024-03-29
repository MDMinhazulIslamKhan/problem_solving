#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, q;
        cin >> n >> q;
        int inp[n];
        int prefixSum[n];
        int suffixSum[n];
        for (int j = 0; j < n; j++)
        {
            cin >> inp[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                prefixSum[j] = inp[j];
                continue;
            }
            prefixSum[j] = inp[j] + prefixSum[j - 1];
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (j == n - 1)
            {
                suffixSum[j] = inp[j];
                continue;
            }
            suffixSum[j] = inp[j] + suffixSum[j + 1];
        }

        for (int j = 0; j < q; j++)
        {
            int l, r, k;
            long long int sum = 0;
            cin >> l >> r >> k;
            int before = 0;
            int after = 0;
            if (l > 1)
            {
                before = prefixSum[l - 2];
            }
            if (r < n)
            {
                after = suffixSum[r];
            }
            int skip = r - l;
            sum = before + after + (k * (skip + 1));
            if (sum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}