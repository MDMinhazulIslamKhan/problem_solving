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
        string s;
        cin >> s;
        char f = s[0];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (f == s[i]) {
                continue;
            }
            else {
                ans++;
                while (f != s[i] && i < n)
                {
                    i++;
                }i--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}