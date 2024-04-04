#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N, l, r, maximum = 0, minimum = 0, current = 0;
        cin >> N >> l >> r;
        for (int j = 0; j < N; j++)
        {
            int input;
            cin >> input;
            if (input <= r && input >= l)
            {
                current++;
            }
            else
            {
                current--;
            }
            maximum = max(maximum, current);
            minimum = min(minimum, current);
        }
        cout << maximum << " " << minimum << endl;
    }
    return 0;
}