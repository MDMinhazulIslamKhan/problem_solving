#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, z = 0, o = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        int op = min(z, o);
        if (op % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}
