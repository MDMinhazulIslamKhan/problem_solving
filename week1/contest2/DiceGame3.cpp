#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int inp, odd;
        cin >> inp;
        if (inp == 1)
        {
            cout << 6 << endl;
        }
        else
        {
            if (inp % 2 == 0)
            {
                cout << (inp / 2) * 13 << endl;
            }
            else
            {
                cout << ((inp / 2) * 13) + 6 << endl;
            }
        }
    }
}
