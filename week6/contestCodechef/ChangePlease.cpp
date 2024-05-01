#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bill, x;
        cin >> bill;
        x = 100 - bill;
        cout << (x / 10) * 10 << endl;
    }

    return 0;
}