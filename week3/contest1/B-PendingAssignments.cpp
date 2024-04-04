#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, time;
    cin >> t;
    time = 24 * 60;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int totalTimeNeeded = x * y;
        int totalTimeHave = z * time;
        if (totalTimeNeeded > totalTimeHave)
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