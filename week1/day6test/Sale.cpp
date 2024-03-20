#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int days;
        cin >> days;
        int inp[days];
        long long int sum = 0, ans = 0;
        for (int j = 0; j < days; j++)
        {
            cin >> inp[j];
        }

        int l = 0;
        while (l < days)
        {
            ans = max(ans, sum + (inp[l] * 2));
            sum = sum + inp[l];
            l++;
        }
        cout << ans << endl;
    }
}
