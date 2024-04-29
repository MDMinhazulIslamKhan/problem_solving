// not solved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        char inp[n + q];
        int ch[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }
        for (int i = 0; i < n; i++)
        {
            char c = inp[i];
            int count = 1;
            while (i < n)
            {
                if (inp[i + 1] == c)
                {
                    count++;
                    i++;
                }
                else
                {
                    break;
                }
            }

            ch[c - 97] = max(ch[c - 97], count);
        }
        int ans = -1;
        int maxChar;
        for (int i = 0; i < 26; i++)
        {
            ans = max(ans, ch[i]);
        }
        cout << ans << " ";

        for (int i = 0; i < q; i++)
        {
            n++;
            char query;
            cin >> query;
            inp[n - 2] = query;
            if (inp[n - 2] == query)
            {
                ch[query - 97]++;
            }
            else
            {
                ch[query - 97] = max(ch[query - 97], 1);
            }

            int ans2 = -1;
            for (int i = 0; i < 26; i++)
            {
                ans2 = max(ans2, ch[i]);
            }
            cout << ans2 << " ";
        }
        cout << endl;
    }
}