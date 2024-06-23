#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, ans = INT_MAX;
        cin >> a >> b >> c;
        for (int i : {a, b, c}) {
            int x = abs(a - i) + abs(b - i) + abs(c - i);
            ans = min(ans, x);
        }

        cout << ans << endl;
    }

    return 0;
}