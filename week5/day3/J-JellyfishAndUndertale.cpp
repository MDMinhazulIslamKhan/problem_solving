#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int tools[n];
        long long int ans = b;
        for (int i = 0; i < n; i++)
        {
            cin >> tools[i];
            ans += min(a - 1, tools[i]);
        }

        cout << ans << endl;
    }

    return 0;
}