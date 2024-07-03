// not solved

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char N[n];
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
        }
        int x = 0, ans = 0;
        bool start = false;
        for (int i = 0; i < m; i++)
        {
            char M;
            cin >> M;
            if (x == n) {
                continue;
            }
            if (start == false) {
                while (start == false && x < n)
                {

                    if (M != N[x]) {
                        x++;
                    }
                    else {
                        start = true;
                        x++;
                        break;
                    }
                }
            }
            else {
                if (M != N[x]) {
                    ans++;
                }
                x++;
            }
        }
        if (!start) {
            cout << m << endl;
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}