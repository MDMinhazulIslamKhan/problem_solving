#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k;
        cin >> a >> b >> k;
        int ans = 0;
        while (true)
        {
            if (b / k >= a && b % k == 0) {
                b = b / k;
                ans++;
            }
            else if (b % k == 0) {
                long long diff = b - a;
                ans += diff;
                break;
            }
            else {
                long long extra = b % k;
                b = b - extra;
                ans += extra;
            }
        }
        cout << ans << endl;
    }
    return 0;
}