#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        bool x = true;
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            x = (j % 2 == 1);
            for (int k = 0; k < n; k++)
            {
                if (x)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
                x = !x;
            }
            x = (j % 2 == 1);
            cout << endl;
            for (int k = 0; k < n; k++)
            {
                if (x)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
                x = !x;
            }
            cout << endl;
            x = !x;
        }
    }

    return 0;
}
