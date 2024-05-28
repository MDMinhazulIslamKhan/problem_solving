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
        int a = INT_MIN, b = INT_MIN, c = INT_MIN;
        long long int ans = 0;
        map<vector<int>, int> m;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            a = b; b = c;c = inp;
            if (a == INT_MIN || b == INT_MIN) {
                continue;
            }
            vector<int>v;
            v.push_back(INT_MIN);
            v.push_back(b);
            v.push_back(c);
            m[v]++;
            if (m[v]) {
                ans += (m[v] - 1);
            }
            v.clear();
            v.push_back(a);
            v.push_back(INT_MIN);
            v.push_back(c);
            m[v]++;
            if (m[v]) {
                ans += (m[v] - 1);
            }
            v.clear();
            v.push_back(a);
            v.push_back(b);
            v.push_back(INT_MIN);
            m[v]++;
            if (m[v]) {
                ans += (m[v] - 1);
            }
            v.clear();
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            if (m[v]) {
                ans -= 3 * m[v];
            }
            m[v]++;
        }
        cout << ans << endl;
    }

    return 0;
}
