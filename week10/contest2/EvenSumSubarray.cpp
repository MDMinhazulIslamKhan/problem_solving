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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int sumArr[n], s = 0;
        for (int i = 0; i < n; i++)
        {
            int pre = 0;
            if (i != 0) {
                pre = sumArr[i - 1];
            }
            sumArr[i] = arr[i] + pre;
        }

        int check, ans = 0;
        for (int i = 0; i < n; i++)
        {
            check = n - i;
            for (int j = n - 1; j >= i; j--)
            {
                int ch = 0;
                if (i != 0) {
                    ch = sumArr[i - 1];
                }
                long long int sum = sumArr[j] - ch;
                if (sum % 2 == 0) {
                    ans = max(ans, (j - i + 1));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}