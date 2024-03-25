#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        bool flag = true;
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            int inp;
            cin >> inp;
            mp[inp]++;
        }
        for (auto i : mp)
        {
            if (i.second > n / 2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}