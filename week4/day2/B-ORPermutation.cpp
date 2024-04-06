#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        for (int j = x; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}