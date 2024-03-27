#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        map<char, int> mp;
        for (int j = 0; j < n; j++)
        {
            char inp;
            cin >> inp;
            mp[inp]++;
        }
        int oddCount = 0;
        for (auto a : mp)
        {
            if (a.second % 2 != 0)
            {
                oddCount++;
                // cout << a.first << " " << a.second << endl;
            }
        }
        // cout << n << " " << k << " " << oddCount << " " << endl;

        if (k > oddCount || abs(k - oddCount) < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}