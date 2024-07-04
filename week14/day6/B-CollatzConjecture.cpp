// unsolved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        int count = 0;
        while (k)
        {
            long long int need;
            if (x < y) {
                need = y - x;
            }
            else {
                need = (((x / y) + 1) * y) - x;
            }

            if (need > k) {
                x += k;
                break;
            }
            else {
                x += need;
                k -= need;
            }
            while (x % y == 0) {
                x /= y;

            }

            // count++;
            // if (count > 1000) {
            //     x = x % k;
            //     break;
            // }
        }

        cout << x << endl;
    }

    return 0;
}