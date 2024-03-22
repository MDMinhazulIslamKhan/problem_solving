#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    vector<int> v;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        if (inp != x)
        {
            v.push_back(inp);
        }
    }
    for (int ans : v)
    {
        cout << ans << " ";
    }

    return 0;
}