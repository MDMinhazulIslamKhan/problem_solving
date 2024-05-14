#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        h = h - y;
        cout << ceil(1.0 * h / x) + 1 << endl;
    }
}