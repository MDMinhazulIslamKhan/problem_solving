#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int boy[n];
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    sort(boy, boy + n);

    int m;
    cin >> m;
    int girl[m];
    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
    }
    sort(girl, girl + m);
    int ans = 0, b = 0, g = 0;

    while (b < n && g < m)
    {
        if (abs(boy[b] - girl[g]) <= 1)
        {
            ans++;
            b++;
            g++;
        }
        else if (boy[b] < girl[g])
        {
            b++;
        }
        else
        {
            g++;
        }
    }
    cout << ans;
    return 0;
}