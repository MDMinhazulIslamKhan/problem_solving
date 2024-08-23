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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2) {
            cout << 1 << " " << 2 << endl;
            continue;
        }

        vector<int> a(n + 1);
        a[1] = 2, a[n] = 3, a[(n + 1) / 2] = 1;

        int x = 4;

        for (int i = 1; i <= n; i++)
        {
            if (a[i] != 0) {
                cout << a[i] << ' ';
            }
            else {
                cout << x++ << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}