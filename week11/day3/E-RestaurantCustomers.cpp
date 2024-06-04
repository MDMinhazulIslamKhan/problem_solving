#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<long long int, int>mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    int sum = 0, ans = INT_MIN;
    for (auto i : mp)
    {
        sum += i.second;
        ans = max(sum, ans);
    }
    cout << ans;

    return 0;
}