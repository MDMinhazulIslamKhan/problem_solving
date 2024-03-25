#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            int inp;
            cin >> inp;
            sum += inp;
        }
        if (sum < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}