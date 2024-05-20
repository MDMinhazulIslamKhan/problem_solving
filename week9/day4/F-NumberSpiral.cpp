#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int y, x, start;
        cin >> y >> x;
        if (x > y) {
            if (x % 2 == 0) {
                start = ((x - 1) * (x - 1)) + 1;
                cout << start + y - 1 << endl;
            }
            else {
                start = x * x;
                cout << start - y + 1 << endl;
            }
        }
        else {
            if (y % 2 == 0) {
                start = y * y;
                cout << start - x + 1 << endl;
            }
            else {
                start = ((y - 1) * (y - 1)) + 1;
                cout << start + x - 1 << endl;
            }
        }

    }
    return 0;
}