#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[k];
        for (int i = 0; i < k; i++)
            cin >> arr[i];

        sort(arr, arr + k);

        int ans = k, cat = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (cat < arr[i])
                cat += (n - arr[i]);
            else
            {
                ans = k - 1 - i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}