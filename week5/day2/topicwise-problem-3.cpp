#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int inp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    for (int i = 0; i < k; i++)
    {
        long long int a, l, r, mid;
        cin >> a;
        l = 0;
        r = n - 1;
        int index = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a <= inp[mid])
            {
                index = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << index + 1 << endl;
    }

    return 0;
}