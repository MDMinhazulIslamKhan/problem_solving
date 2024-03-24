#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char row1[n];
        char row2[n];
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            cin >> row1[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> row2[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (row1[j] != row2[j] && (row1[j] == 'R' || row2[j] == 'R'))
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

    return 0;
}