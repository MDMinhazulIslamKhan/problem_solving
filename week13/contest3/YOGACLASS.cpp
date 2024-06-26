#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, ans = 0;
        cin >> n >> x >> y;
        if (2 * x >= y) {
            ans = (n * x);
        }
        else {
            ans = ((n / 2) * y);
            if (n % 2 == 1) {
                ans += x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}