#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int number) {
    if (number == 1) {
        return false;
    }
    for (long long i = 2; i * i <= number; i++)
    {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;

        if (sqrt(n) * sqrt(n) == n && isPrime(sqrt(n))) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
