#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, s, ans = 0;
    cin >> k >> s;
    int first = 0;

    while (first <= k && first <= s)
    {
        int second = max(s - first - k, 0);
        while (second <= k && second <= s)
        {
            int third = s - (first + second);
            if (third >= 0 && third <= s && third <= k)
            {
                ans++;
            }
            second++;
        }
        first++;
    }
    cout << ans;
    return 0;
}