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
    long long int inp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    pbds <pair<int, int>> p;

    int r = 0, l = 0;
    while (l < n)
    {
        p.insert({ inp[l],l });
        if (l - r + 1 < k) {
            l++;
            continue;
        }
        else if (l - r + 1 > k) {
            p.erase({ inp[r],r });
            r++;
        }
        int check = k / 2;
        if (k % 2 == 0) {
            check = (k / 2) - 1;
        }
        pair<int, int> it = *p.find_by_order(check);
        cout << it.first << " ";
        l++;
    }


    return 0;
}