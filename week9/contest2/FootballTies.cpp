#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        x = x % 3;
        y = y % 3;

        cout << min(x, y) << endl;
    }

    return 0;
}