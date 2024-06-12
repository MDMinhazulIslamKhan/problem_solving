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
        int go = (x * 10);
        for (int i = 1; i < 1000000000; i++)
        {
            int need = y * (10 + i);
            int needTo = need - go;
            if (100 * i >= needTo) {
                cout << i << endl;
                break;
            }
        }

    }

    return 0;
}