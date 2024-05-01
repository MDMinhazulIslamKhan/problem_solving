#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int batsmenCount, bowlerCount;
        cin >> batsmenCount >> bowlerCount;
        vector<int> batsmen;
        vector<int> bowlers;
        for (int i = 0; i < batsmenCount; i++)
        {
            int inp;
            cin >> inp;
            batsmen.push_back(inp);
        }
        for (int i = 0; i < bowlerCount; i++)
        {
            int inp;
            cin >> inp;
            bowlers.push_back(inp);
        }
        if (batsmenCount < 4 || bowlerCount < 4 || batsmenCount + bowlerCount < 11)
        {
            cout << -1 << endl;
            continue;
        }
        sort(batsmen.begin(), batsmen.end(), greater<int>());
        sort(bowlers.begin(), bowlers.end(), greater<int>());
        long long int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans += batsmen[i];
        }
        for (int i = 0; i < 4; i++)
        {
            ans += bowlers[i];
        }
        vector<int> extra;

        for (int i = 4; i < 8; i++)
        {
            if (i >= batsmenCount)
            {
                break;
            }
            extra.push_back(batsmen[i]);
        }

        for (int i = 4; i < 8; i++)
        {
            if (i >= bowlerCount)
            {
                break;
            }
            extra.push_back(bowlers[i]);
        }
        sort(extra.begin(), extra.end(), greater<int>());
        for (int i = 0; i < 3; i++)
        {
            ans += extra[i];
        }

        cout << ans << endl;
    }
}