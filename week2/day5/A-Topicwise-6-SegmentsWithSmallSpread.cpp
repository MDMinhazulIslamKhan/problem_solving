#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int k, ans = 0;
    cin >> n >> k;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    multiset<long long int> mSet;
    while (r < n)
    {
        mSet.insert(arr[r]);
        long long int mn, mx;
        mn = *mSet.begin();
        mx = *mSet.rbegin();
        if (mx - mn <= k)
        {
            ans += mSet.size();
        }
        else
        {
            while (l < r)
            {
                mn = *mSet.begin();
                mx = *mSet.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                auto it = mSet.find(arr[l]);
                mSet.erase(it);
                l++;
            }
            mn = *mSet.begin();
            mx = *mSet.rbegin();
            if (mx - mn <= k)
            {
                ans += mSet.size();
            }
        }
        r++;
    }

    cout << ans;
    return 0;
}