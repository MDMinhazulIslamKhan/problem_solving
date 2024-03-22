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
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            int b;
            cin >> b;
            for (int k = 0; k < b; k++)
            {
                char action;
                cin >> action;
                if (action == 'D')
                {
                    if (a[j] == 9)
                    {
                        a[j] = 0;
                    }
                    else
                    {
                        a[j]++;
                    }
                }
                if (action == 'U')
                {
                    if (a[j] == 0)
                    {
                        a[j] = 9;
                    }
                    else
                    {
                        a[j]--;
                    }
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;
}