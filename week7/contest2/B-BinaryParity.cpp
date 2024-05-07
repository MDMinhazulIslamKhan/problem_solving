#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        while (n)
        {
            ans += (n % 2);
            n = n / 2;
        }
        if (ans % 2)
        {
            cout << "ODD" << endl;
        }
        else
        {
            cout << "EVEN" << endl;
        }
    }
    return 0;
}