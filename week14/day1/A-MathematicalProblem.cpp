#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int a[n];
        int ans = 5000;

        for (int i = 0; i < n - 1; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    a[cnt] = 10 * (s[j] - 48) + (s[j + 1] - 48);
                    j++;
                }
                else {
                    a[cnt] = (s[j] - 48);
                }
                cnt++;
            }

            int val = 0;
            for (int j = 0; j < cnt; j++) {
                if (a[j] == 0) {
                    val = -1;
                    break;
                }
                if (a[j] == 1) {
                    continue;
                }
                val += a[j];
            }

            if (!val) {
                val = 1;
            }
            if (val == -1) {
                val = 0;
            }

            ans = min(ans, val);
        }

        cout << ans << endl;
    }

    return 0;
}