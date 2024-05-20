// unsolved
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    set<long long int> s;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        s.insert(a);
    }

    if (n < 3) {
        cout << "IMPOSSIBLE";
        return 0;
    }

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
    cout << endl;

    auto pos = s.lower_bound(x);
    int shouldCheck;
    if (pos == s.end()) {
        shouldCheck = s.size() - 1;
    }
    else {
        shouldCheck = distance(s.begin(), pos);
    }

    if (shouldCheck < 3) {
        cout << "IMPOSSIBLE";
        return 0;
    }

    cout << "IMPOSSIBLE";
    cout << shouldCheck;

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int inp[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> inp[i];
//     }
//     if (n < 3) {
//         cout << "IMPOSSIBLE";
//         return 0;
//     }
//     for (int i = 0; i < n - 2; i++)
//     {
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (inp[i] + inp[j] + inp[k] == x) {
//                     cout << i + 1 << " " << j + 1 << " " << k + 1;
//                     return 0;
//                 }
//             }

//         }
//     }
//     cout << "IMPOSSIBLE";

//     return 0;
// }