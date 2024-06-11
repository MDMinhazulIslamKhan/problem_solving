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
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {

            ans++;
            if (ans == a[i]) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}