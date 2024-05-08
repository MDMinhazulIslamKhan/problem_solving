#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        ans += (n / 4);
        n = (n - (ans * 4));
        ans += (n / 2);
        cout << ans << endl;
    }

    return 0;
}