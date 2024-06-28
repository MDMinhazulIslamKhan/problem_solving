#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, countB, lowest;
        cin >> n >> a >> b;
        if (b <= a) {
            cout << n * a << endl;
            continue;
        }
        countB = min(n, b - a);
        lowest = b - countB + 1;
        cout << (countB * (2 * lowest + countB - 1) / 2) + ((n - countB) * a) << endl;
    }

    return 0;
}