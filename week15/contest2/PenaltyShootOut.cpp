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
        if (x == y) {
            cout << "YES" << endl;
        }
        else if (x < y) {
            if (y - x < 3) {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else {
            if (x - y > 1) {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

    }

    return 0;
}