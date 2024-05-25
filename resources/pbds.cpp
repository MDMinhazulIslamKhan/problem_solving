#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin >> n;
    pbds<int> p;
    for (int i = 1; i <= n; i++)
    {
        int inp;
        cin >> inp;
        p.insert(inp);
    }

    for (auto x : p) {
        cout << x << " ";
    }
    cout << endl;
    cout << p.order_of_key(6); // 6 এর চাইতে ছোট কয়টা ভ্যালু আছে

    auto it = p.find_by_order(0); // 0 index এ কোন ভ্যালু আছে তার ইটারেটর

    cout << *it;
    return 0;
}

/*
    multiset erase is not working in pbds, erase multiset using set

    int n;
    cin >> n;
    pbds<pair<int, int>> p;
    for (int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        p.insert({ input,i });
    }
    p.erase({ 5,2 }); // এইভাবে erase করতে হবে


*/