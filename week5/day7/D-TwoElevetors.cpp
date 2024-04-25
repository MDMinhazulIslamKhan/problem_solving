#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int firstElevator = a - 1;
        int secondElevator;
        if (b > c)
            secondElevator = b - 1;
        else
            secondElevator = (c - b) + (c - 1);

        if (firstElevator < secondElevator)
            cout << 1 << endl;
        else if (secondElevator < firstElevator)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}