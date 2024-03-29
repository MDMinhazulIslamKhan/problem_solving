
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int h, m;
        char z;
        string x;
        cin >> h >> z >> m;
        if (h >= 12)
        {
            x = "PM";
            h = h - 12;
        }
        else
        {
            x = "AM";
        }
        if (h == 0)
        {
            h = 12;
        }
        cout << setw(2) << setfill('0') << h << z << setw(2) << setfill('0') << m << " " << x << endl;
    }

    return 0;
}
