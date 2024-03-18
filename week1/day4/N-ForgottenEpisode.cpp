#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n - 1; i++)
    {
        int inp;
        cin >> inp;
        v.push_back(inp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != i + 1)
        {
            n = i + 1;
            break;
        }
    }
    cout << n;
    return 0;
}