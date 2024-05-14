#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<string> s;
    set<string> firstTime;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }
    reverse(s.begin(), s.end());

    for (auto it = s.begin(); it != s.end(); it++)
    {
        string p = *it;
        if (!firstTime.count(p)) {
            cout << p[p.length() - 2] << p[p.length() - 1];
            firstTime.insert(p);
        }
    }
    return 0;
}