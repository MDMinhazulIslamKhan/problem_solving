#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n], b[n];
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
            if (a[i] > b[i]) {
                if ((b[i] * 2) >= a[i]) {
                    count++;
                }
            }
            else  if (a[i] < b[i]) {
                if ((a[i] * 2) >= b[i]) {
                    count++;
                }
            }
            else {
                count++;
            }
        }
        cout << count << endl;
    }
}