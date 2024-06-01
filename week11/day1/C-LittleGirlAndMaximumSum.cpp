#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    vector<int> checkDiffArray(n + 1);

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        checkDiffArray[l - 1]++;
        checkDiffArray[r]--;
    }
    for (int i = 1; i <= n; i++)
    {
        checkDiffArray[i] = checkDiffArray[i] + checkDiffArray[i - 1];
    }
    multiset<int>m;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << checkDiffArray[i] << " ";
    // }
    for (int i = 0; i < n; i++)
    {
        m.insert(checkDiffArray[i]);
    }
    int i = 0;
    long long int ans = 0;
    for (auto a : m) {
        ans += (1ll * a * arr[i]);
        i++;
    }
    cout << ans;
    return 0;
}