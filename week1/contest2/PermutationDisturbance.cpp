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
        int inp[n];
        for (int j = 0; j < n; j++)
        {
            cin >> inp[j];
        }
        int l = 0, ans = 0;
        while (l < n)
        {
            if (inp[l] == (l + 1))
            {
                swap(inp[l], inp[l + 1]);
                ans++;
            }
            l++;
        }
        cout << ans << endl;
    }
}
