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
        char c;
        int count = 0;
        int decrement = 0;
        int start = false;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == 'B' && !start) {
                start = true;
                count++;
                continue;
            }
            else if (c == 'W' && !start) {
                continue;
            }

            count++;
            if (c == 'B') {
                decrement = 0;
            }
            if (c == 'W') {
                decrement++;
            }
        }
        cout << count - decrement << endl;
    }

    return 0;
}