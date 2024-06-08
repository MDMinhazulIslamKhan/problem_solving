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
        long long int ps, pp, ans = 1;
        cin >> ps >> pp;
        long long int s, p;
        for (int i = 1; i < n; i++)
        {
            cin >> s >> p;
            if (s >= ps && p >= pp) {
                ans = -1;
            }
            if (ans == -1) {
                continue;
            }
            if (s < ps) {
                ans = max(ans, s + 1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}