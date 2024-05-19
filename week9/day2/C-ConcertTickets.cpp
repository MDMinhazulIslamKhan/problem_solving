#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<long long int> tPrice;
    for (int i = 0; i < n; i++)
    {
        long long int price;
        cin >> price;
        tPrice.insert(price);
    }

    for (int i = 0; i < m; i++)
    {
        long long int cMaxPrice;
        cin >> cMaxPrice;
        auto it = tPrice.upper_bound(cMaxPrice);
        if (it == tPrice.begin()) {
            cout << -1 << endl;
        }
        else {
            it--;
            cout << *it << endl;
            tPrice.erase(it);
        }
    }
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<long long int>tPrice;
//     for (int i = 0; i < n; i++)
//     {
//         long long int price;
//         cin >> price;
//         tPrice.push_back(price);
//     }
//     sort(tPrice.begin(), tPrice.end());

//     for (int i = 0; i < m; i++)
//     {
//         long long  int cMaxPrice;
//         cin >> cMaxPrice;

//         int l = 0, r = tPrice.size() - 1, mid, ans = -1;
//         while (l <= r) {
//             mid = (l + r) / 2;
//             if (tPrice[mid] > cMaxPrice) {
//                 r = mid - 1;
//             }
//             else {
//                 ans = mid;
//                 l = mid + 1;
//             }
//         }
//         if (ans == -1) {
//             cout << -1 << endl;
//         }
//         else {
//             cout << tPrice[ans] << endl;
//             tPrice.erase(tPrice.begin() + ans);
//         }
//     }
//     return 0;
// }