#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long int lcm = 1ll * (a / __gcd(a, b) * b);

    int both = n / lcm;
    int red = n / a;
    int blue = n / b;
    long long int ans = (1ll * (red - both) * p) + (1ll * (blue - both) * q);
    if (p > q) {
        ans += both * p;
    }
    else {
        ans += both * q;
    }
    cout << ans;
    return 0;
}