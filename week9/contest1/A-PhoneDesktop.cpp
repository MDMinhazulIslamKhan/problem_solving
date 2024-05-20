#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y;
        cin >> x >> y;
        float needForTwo = ceil(y / 2);
        int free = abs((y * 4) - 15 * needForTwo);
        if (free >= x) {
            cout << needForTwo << endl;
        }
        else {

            x = x - free;
            int ans = ceil(x / 15);
            cout << needForTwo + ans << endl;
        }
    }
    return 0;
}