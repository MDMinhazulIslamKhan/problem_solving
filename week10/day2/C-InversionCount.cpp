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
        long long count = 0;
        cin >> n;
        int arr[n];
        pbds<int> p;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            arr[i] = inp;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            p.insert(arr[i]);
            count += p.order_of_key(arr[i]);
        }
        cout << count << endl;

    }
    return 0;
}