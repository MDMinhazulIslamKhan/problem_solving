#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    vector<long long int> divisors;
    for (long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if (k > divisors.size()) {
        cout << -1;
    }
    else {
        cout << divisors[k - 1];
    }
    return 0;
}