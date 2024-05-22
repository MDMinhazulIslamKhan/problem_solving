// unsolved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int aPoint[k + 1];
        long long int bMinute[k + 1];
        aPoint[0] = 0;
        bMinute[0] = 0;
        for (int i = 1; i <= k; i++)
        {
            int p;
            cin >> p;
            aPoint[i] = p;

        }
        for (int i = 1; i <= k; i++)
        {
            long long int m;
            cin >> m;
            bMinute[i] = m;

        }
        for (int i = 0; i < q; i++)
        {
            int d;
            cin >> d;

            int l = 0, r = k - 1, mid, idx = 0;

            while (l <= r)
            {
                mid = (l + r) / 2;
                if (aPoint[mid] == d) {
                    idx = mid;
                    break;
                }
                else if (aPoint[mid] > d) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                    idx = mid;
                }
            }
            float lastPoints = aPoint[idx + 1] - aPoint[idx];
            float lastMinuit = bMinute[idx + 1] - bMinute[idx];

            cout << bMinute[idx] + floor(lastPoints / lastMinuit) << endl;
        }

    }

    return 0;
}