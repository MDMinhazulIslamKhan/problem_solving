#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = 0, distinct = 0, shouldRemove = 0;
        cin >> n;
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            int inp;
            cin >> inp;
            mp[inp]++;
        }

        for (auto a : mp)
        {
            distinct++;
            shouldRemove += (a.second - 1);
        }
        if (shouldRemove % 2 == 0)
        {
            cout << distinct << endl;
        }
        else
        {
            cout << distinct - 1 << endl;
        }
    }

    return 0;
}