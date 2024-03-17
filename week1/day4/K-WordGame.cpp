#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        int n;
        cin >> n;
        string guy1[n];
        string guy2[n];
        string guy3[n];
        map<string, int> mp;
        for (int j = 0; j < n; j++)
        {
            cin >> guy1[j];
            mp[guy1[j]]++;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> guy2[j];
            mp[guy2[j]]++;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> guy3[j];
            mp[guy3[j]]++;
        }

        // output
        int ans1 = 0, ans2 = 0, ans3 = 0;
        for (int j = 0; j < n; j++)
        {
            if (mp[guy1[j]] == 1)
            {
                ans1 += 3;
            }
            else if (mp[guy1[j]] == 2)
            {
                ans1 += 1;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (mp[guy2[j]] == 1)
            {
                ans2 += 3;
            }
            else if (mp[guy2[j]] == 2)
            {
                ans2 += 1;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (mp[guy3[j]] == 1)
            {
                ans3 += 3;
            }
            else if (mp[guy3[j]] == 2)
            {
                ans3 += 1;
            }
        }
        cout << ans1 << " " << ans2 << " " << ans3 << " " << endl;
    }

    return 0;
}