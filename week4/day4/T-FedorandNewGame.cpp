#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    int arr[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (((arr[m] >> j) & 1) != ((arr[i] >> j) & 1))
            {
                count++;
            }
        }

        if (count <= k)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}