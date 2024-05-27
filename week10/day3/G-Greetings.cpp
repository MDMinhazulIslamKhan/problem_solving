#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a, b;
        pbds<pair<long long int, long long int>> p1;
        pbds<long long int> p2;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            p2.insert(b);
            p1.insert({ a, b });
        }

        long long int ans = 0;
        for (auto x : p1) {
            p2.erase(x.second);
            ans += p2.order_of_key(x.second + 1);
        }

        cout << ans << endl;
    }
    return 0;
}