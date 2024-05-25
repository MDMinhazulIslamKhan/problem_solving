#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, m;
    cin >> n >> m;
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        p.insert(inp);
    }
    for (int i = 0; i < m; i++)
    {
        int inp;
        cin >> inp;
        cout << p.order_of_key(inp + 1) << " ";
    }

    return 0;
}