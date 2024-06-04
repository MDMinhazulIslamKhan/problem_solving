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
        vector<int>inp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }
        sort(inp.begin(), inp.end());

        int ans = 0;

        for (int i = 2 * (*inp.begin()); i <= (2 * inp.back()); i++)
        {
            int cnt = 0;
            int l = 0, r = n - 1;

            while (l < r)
            {
                if (inp[l] + inp[r] > i)
                {
                    r--;
                }
                else if (inp[l] + inp[r] < i)
                {
                    l++;
                }
                else
                {
                    cnt++;
                    l++;
                    r--;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}
