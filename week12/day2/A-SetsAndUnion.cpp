#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n;

        set<int> all;
        vector<set<int>> sets(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            set<int> temp;
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                temp.insert(x);
                all.insert(x);
            }
            sets[i] = temp;
        }

        int ans = 0;
        for (auto exist : all)
        {
            set<int> temp;
            for (auto it : sets)
            {
                if (!it.count(exist))
                    temp.insert((it).begin(), (it).end());
            }
            int size = temp.size();
            ans = max(ans, size);
        }

        cout << ans << endl;
    }

    return 0;
}