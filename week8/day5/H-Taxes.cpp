#include <bits/stdc++.h>
using namespace std;


bool isPrime(long long int n) {
    if (n == 1) {
        return false;
    }

    for (int i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main()
{
    long long int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1;
    }
    else if (n % 2 == 0 || isPrime(n - 2))
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }

    return 0;
}