// tle error ==> unsolved
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, k;
    cin >> n >> k;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pbds <pair<long long int, int>> p;
    multiset<long long int> lrg;
    multiset<long long int> sml;

    int r = 0, l = 0;
    while (r < n)
    {
        p.insert({ arr[r],r });
        if (r - l + 1 == k) {
            int pos = k / 2;
            if (k % 2 == 0) {
                pos--;
            }
            auto it = *p.find_by_order(pos);
            long long int ans = 0;
            for (auto a : p) {
                ans += abs(a.first - it.first);
            }
            p.erase({ arr[l],l });
            l++;
            cout << ans << " ";
        }
        r++;
    }

    return 0;
}