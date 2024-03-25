#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int sonu, titu;
        cin >> sonu >> titu;
        int diff = abs(sonu - titu);
        cout << diff + sonu + titu - 1 << endl;
    }
    return 0;
}