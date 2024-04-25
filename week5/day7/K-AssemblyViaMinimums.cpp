// not solved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int inp[(n * (n - 1)) / 2];
        int out[n], check = n - 1;
        for (int i = 0; i < (n * (n - 1)) / 2; i++)
        {
            cin >> inp[i];
        }
        int l = 0;
        bool isPositive = false;
        int mn = INT_MAX;
        while (l < (n * (n - 1)) / 2)
        {
            int r = check;
            int mx = INT_MIN;
            while (r--)
            {
                mx = max(inp[l], mx);
                mn = min(inp[l], mn);
                l++;
            }
            if (mx > 0)
            {
                isPositive = true;
            }
            out[n - 1 - check] = mx;
            check--;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (!isPositive && out[i] == 0)
            {
                isPositive = true;
                cout << out[i] << " ";
            }
            else
            {
                cout << out[i] << " ";
            }
        }
        sort(out, out + n - 1, greater<int>());
        n != 2 ? cout << abs(out[0]) + abs(out[1]) << endl : cout << out[0] << endl;
    }

    return 0;
}
