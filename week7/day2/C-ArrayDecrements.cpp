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
        int a[n], b[n], maxDiff = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            int diff = a[i] - b[i];
            maxDiff = max(maxDiff, diff);
        }

        for (int i = 0; i < n; i++)
        {
            int current;
            if (a[i] - maxDiff < 0)
            {
                current = 0;
            }
            else
            {
                current = a[i] - maxDiff;
            }
            if (current != b[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}