// tle problem
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
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int a = 0; a < n; a++)
        {
            bool flag = false;
            string original = arr[a];
            for (int i = 0; i < n; i++)
            {
                if (i == a)
                {
                    continue;
                }
                for (int j = 0; j < n; j++)
                {
                    if (j == a)
                    {
                        continue;
                    }
                    string concatenation = arr[i] + arr[j];
                    // cout << " " << concatenation << " " << endl;
                    if (concatenation == original)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
