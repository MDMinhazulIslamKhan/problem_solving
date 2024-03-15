#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, ans = -1;
    cin >> a >> b >> c;

    for (int i = 1; i <= b / c; i++)
    {
        if (c * i >= a && c * i <= b)
        {
            ans = c * i;
            break;
        }
    }
    cout << ans;

    return 0;
}