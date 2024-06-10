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
        vector<long long int> arr;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            arr.push_back(inp);
        }

        long long int ans = 0;
        if (n == 1)
        {
            arr.push_back(0);
        }

        if (arr[0] > 0) {
            ans += arr[0];
            if (arr[1] > 0) {
                ans += arr[1];
            }
        }
        else if (arr[0] + arr[1] > 0) {
            ans += arr[0] + arr[1];
        }
        for (int i = 2; i < n; i++)
        {
            if (arr[i] > 0) {
                ans += arr[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}