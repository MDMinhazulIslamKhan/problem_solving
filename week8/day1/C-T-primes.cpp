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
        long long int root = sqrt(n);
        if (root * root == n && isPrime(root)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
