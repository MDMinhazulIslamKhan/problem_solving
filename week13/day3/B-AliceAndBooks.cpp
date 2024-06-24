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
        long long int inp[n], small = 0, big = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
            mx = max(mx, inp[i]);
        }
        if (mx == inp[0]) {
            big = inp[0];
            small = inp[1];
        }
        else {
            small = inp[0];
        }
        for (int i = 0; i < n; i++)
        {
            if (inp[i] >= big) {
                small = big;
                big = inp[i];
            }
            else {
                small = inp[i];
            }
        }

        cout << small + big << endl;
    }

    return 0;
}