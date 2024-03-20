#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char inp[n];
        for (int j = 0; j < n; j++)
        {
            cin >> inp[j];
        }
        int ans = 0;
        int l = 0, r = 2;
        while (r < n)
        {
            cout << " ( " << inp[l] << " " << inp[r] << " ) " << endl;

            if (inp[l] != inp[r])
            {
                ans++;
            }
            l++;
            r++;
        }
        cout << ans << "\n";
    }
}
