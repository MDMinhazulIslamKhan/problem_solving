
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        while (true)
        {
            int gcd = __gcd(a, b);
            if (gcd == 1)
            {
                break;
            }
            b = b / gcd;
        }

        if (b == 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}