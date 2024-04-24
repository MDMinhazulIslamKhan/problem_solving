#include <bits/stdc++.h>

using namespace std;

bool sortVectorToSmall(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
bool sortVectorToBig(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<int, int>> letters;
        for (int i = 0; i < s.size(); i++)
        {
            letters.push_back({i, s[i] - 96});
        }
        int first = letters[0].second;
        int last = letters[s.size() - 1].second;
        if (first > last)
        {
            sort(letters.begin() + 1, letters.end() - 1, sortVectorToSmall);
        }
        else
        {
            sort(letters.begin() + 1, letters.end() - 1, sortVectorToBig);
        }

        int mx = max(s[0] - 96, s[s.size() - 1] - 96);
        int mn = min(s[0] - 96, s[s.size() - 1] - 96);

        vector<pair<int, int>> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (letters[i].second >= mn && letters[i].second <= mx)
            {
                ans.push_back(letters[i]);
            }
        }
        cout << mx - mn << " " << ans.size() << endl;
        for (auto a : ans)
        {
            cout << a.first + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
