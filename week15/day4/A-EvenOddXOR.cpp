// error
#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int>ans(n, 0);

        if (n % 2 == 0) {
            for (long long int i = 1, j = 1; i < n;i += 2, j++)
            {
                ans[i] = j;
            }
            for (long long int i = 2, j = 1; i < n;i += 2, j++)
            {
                ans[i] = j;
            }
        }
        else {
            for (long long int i = 0, j = 1; i < n;i += 2, j++)
            {
                ans[i] = j;
            }
            for (long long int i = 1, j = 1; i < n;i += 2, j++)
            {
                ans[i] = j;
            }
        }

        if ((n + 1 / 2) % 2 == 0) {
            for (long long int i = 0; i + 2 < n;i += 2)
            {
                ans[i] = ans[i] | (1ll << 30);;
            }
            for (long long int i = 2; i < n;i += 2)
            {
                ans[i] = ans[i] | (1ll << 29);;
            }

        }
        else {
            for (long long int i = 0; i < n;i += 2)
            {
                ans[i] = ans[i] | (1ll << 30);;
            }
        }
        for (auto a : ans) {
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}