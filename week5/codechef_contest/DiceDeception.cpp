#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        int dices[n];
        for (int i = 0; i < n; i++)
        {
            cin >> dices[i];
            ans += dices[i];
        }
        sort(dices, dices + n);
        int check = 0;
        while (k > 0 && dices[check] <= 3)
        {
            int be = 7 - dices[check];
            ans += (be - dices[check]);
            check++;
            k--;
        }

        cout << ans << endl;
    }
    return 0;
}