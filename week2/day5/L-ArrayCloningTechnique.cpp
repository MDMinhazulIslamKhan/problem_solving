#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            mp[arr[j]]++;
        }
        int maxCount = 0, copyCount, ans = 0;
        for (auto a : mp)
        {
            maxCount = max(maxCount, a.second);
        }

        while (maxCount < n)
        {
            // for copy array
            ans++;
            copyCount = maxCount;
            //

            while (copyCount > 0 && maxCount < n)
            {
                ans++;
                copyCount--;
                maxCount++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}