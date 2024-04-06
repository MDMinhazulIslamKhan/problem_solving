#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, XOR = 0;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            XOR ^= arr[j];
        }
        int ans = XOR;
        for (int j = 0; j < n; j++)
        {
            ans = min(ans, (XOR ^ arr[j]));
        }
        cout << ans << endl;
    }

    return 0;
}