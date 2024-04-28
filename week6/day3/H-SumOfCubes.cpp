#include <bits/stdc++.h>

using namespace std;
bool isInteger(double n)
{
    int x = n;

    double temp = n - x;

    if (temp == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int inp;
        cin >> inp;
        int min = cbrt(inp);
        bool ans = false;
        for (int i = 1; i <= min; i++)
        {
            double b = cbrt(inp - pow(i, 3));
            if (b < 1)
            {
                continue;
            }
            if (isInteger(b))
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
    return 0;
}
