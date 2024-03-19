#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, current = 1, ans = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            v.push_back(inp);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == current || v[i] < current)
            {
                current++;
                continue;
            }
            else
            {
                int need = v[i] - current;
                ans += need;
                current += need + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}