#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int val = n ^ 1;
        cout << n << " " << val;
        cout << endl;
    }

    return 0;
}