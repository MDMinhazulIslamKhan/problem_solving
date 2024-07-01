#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long int ans = 0;
        map<long long int, int> unique;
        for (int i = 0; i < n; i++)
        {
            long long int candies;
            cin >> candies;
            if ((candies % m)) {
                unique[(candies % m)]++;
            }
            else {
                unique[m]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            long long int chocolate;
            cin >> chocolate;
            chocolate = chocolate % m;
            int need = m - chocolate;
            ans += unique[need];

        }
        cout << ans << endl;

    }

    return 0;
}