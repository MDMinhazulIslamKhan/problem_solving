#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 200;

    vector<bool>prime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            prime[j] = false;
        }
    }

    vector<int>allPrimes;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]) {
            allPrimes.push_back(i);
        }
    }
    int x, i = 0;

    cin >> x;

    map<int, int>cnt;

    while (x > 1)
    {
        if (x % allPrimes[i] == 0) {
            cnt[allPrimes[i]]++;
            x /= allPrimes[i];
        }
        else {
            i++;
        }
    }

    for (auto ans : cnt) {
        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}