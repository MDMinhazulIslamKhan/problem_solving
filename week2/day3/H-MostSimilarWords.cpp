#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, ans = INT_MAX;
        cin >> n >> m;
        string words[n];
        for (int j = 0; j < n; j++)
        {
            cin >> words[j];
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int total = 0;
                for (int l = 0; l < m; l++)
                {
                    int diff = abs(+words[j][l] - +words[k][l]);
                    total += diff;
                }
                ans = min(ans, total);
            }
        }
        cout << ans << endl;
    }

    return 0;
}