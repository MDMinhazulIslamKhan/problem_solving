#include <bits/stdc++.h>

using namespace std;

bool isAllBinary(int inp)
{
    while (inp != 0)
    {
        int digit = inp % 10;
        if (digit > 1)
        {
            return false;
        }
        inp = inp / 10;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (isAllBinary(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            bool ans = false;
            for (int j = 2; j <= sqrt(n); j++)
            {
                int x = j;
                int y = n / j;
                if (isAllBinary(x) && isAllBinary(y))
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}