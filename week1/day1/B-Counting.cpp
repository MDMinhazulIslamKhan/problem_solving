#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, diff;
    cin >> a >> b;
    diff = b - a;
    if (diff > 0)
    {
        cout << diff + 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}