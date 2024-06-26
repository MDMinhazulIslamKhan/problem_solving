#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x1, y1, x2, y2, pm, am;
        cin >> x1 >> y1 >> x2 >> y2;
        pm = max(x1, y1) == x1 ? 1 : 2;
        am = max(x2, y2) == x2 ? 1 : 2;
        if (x2 == y2) {
            cout << "NO" << endl;
        }
        else if (pm == am) {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}