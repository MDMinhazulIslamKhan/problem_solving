// not solved
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         if (n < 14) {
//             cout << "NO" << endl;
//             continue;
//         }
//         vector<bool>prime(n + 1, true);

//         for (int i = 2; i * i <= n; i++)
//         {
//             for (int j = i + i; j <= n; j += i)
//             {
//                 prime[j] = false;
//             }
//         }

//         vector<int>allPrimes;
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (prime[i]) {
//                 allPrimes.push_back(i);
//             }
//         }
//         if (allPrimes.size() < 3) {
//             cout << "NO" << endl;
//             continue;
//         }
//         for (auto i : allPrimes) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }