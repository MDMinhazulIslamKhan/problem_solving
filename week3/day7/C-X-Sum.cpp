#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> arr[j][k];
            }
        }

        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                int start = arr[j][k];
                int x = j;
                int y = k;
                while (x > 0 && y > 0)
                {
                    start += arr[x - 1][y - 1];
                    x--;
                    y--;
                }
                x = j;
                y = k;
                while (x < n - 1 && y > 0)
                {
                    start += arr[x + 1][y - 1];
                    x++;
                    y--;
                }
                x = j;
                y = k;
                while (x > 0 && y < m - 1)
                {
                    start += arr[x - 1][y + 1];
                    x--;
                    y++;
                }
                x = j;
                y = k;
                while (x < n - 1 && y < m - 1)
                {
                    start += arr[x + 1][y + 1];
                    x++;
                    y++;
                }
                ans = max(ans, start);
            }
        }
        cout << ans << endl;
    }

    return 0;
}