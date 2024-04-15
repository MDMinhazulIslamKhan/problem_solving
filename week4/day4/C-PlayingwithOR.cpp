// not solved

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N, k;
        cin >> N >> k;
        int arr[N];
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        int l = 0, r = 0, ans = 0, odd = 0;
        while (r < N && l < N)
        {
            if (arr[r] % 2 == 1)
            {
                odd++;
            }
            if (r - l + 1 < k)
            {
                r++;
            }
            if (N - l + 1 == k)
            {
                break;
            }
            cout << arr[l] << " " << arr[r] << " " << odd << endl;

            if (odd)
            {
                ans++;
            }

            if (arr[l] % 2 == 1)
            {
                odd--;
            }
            l++;
        }

        cout << ans << endl;
    }
    return 0;
}