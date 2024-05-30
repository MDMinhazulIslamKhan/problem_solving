// unsolved
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
        long long int a[n];
        long long int b[n];
        multiset<long long int> ms;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ms.insert(a[i]);
        }

        b[0] = a[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            long long int output = (b[i - 1] ^ a[i]);
            if (!ms.count(output)) {
                flag = false;
                break;
            }
            b[i] = output;
            ms.erase(ms.find(output));
        }
        if (flag) {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}