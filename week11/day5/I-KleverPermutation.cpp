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

        int high = n, low = 1;
        vector<int> ans(n);

        for (int i = 0; i < k; i++)
        {
            for (int j = i; j < n; j += k)
            {
                if (j % 2)
                {
                    ans[j] = low;
                    low++;
                }
                else
                {
                    ans[j] = high;
                    high--;
                }
            }
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
