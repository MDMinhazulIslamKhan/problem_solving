#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test[20];
    for (int i = 0; i < 20; ++i) {
        test[i] = 1 << i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int check = 2;
        for (int i = 0; i < 20; i++)
        {
            if (test[i] > n) {
                break;
            }
            check = test[i];
        }

        if (check == n) {
            cout << 0 << endl;
        }
        else {
            cout << (n - check) * 2 << endl;
        }
    }
    return 0;
}