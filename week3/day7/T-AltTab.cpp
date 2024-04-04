#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    stack<string> s;
    map<string, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        s.push(input);
    }
    while (!s.empty())
    {
        mp[s.top()]++;

        if (mp[s.top()] == 1)
        {
            int l = s.top().length();
            cout << s.top()[l - 2] << s.top()[l - 1];
        }
        s.pop();
    }
    return 0;
}