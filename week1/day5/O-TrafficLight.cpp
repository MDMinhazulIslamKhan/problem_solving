// not solved properly, tle

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int n, ans = 0;
        char signal;
        cin >> n >> signal;
        char inp[n];
        vector<int> s;
        s.clear();
        for (int j = 0; j < n; j++)
        {
            cin >> inp[j];

            if (inp[j] == signal)
            {
                s.push_back(j);
            }
        }
        if (signal == 'g')
        {
            cout << ans << endl;
            continue;
        }
        for (int p : s)
        {
            int k = p, time = 0;
            while (1)
            {
                if (k == n - 1)
                {
                    k = 0;
                }
                else
                {
                    k++;
                }
                time++;
                if (inp[k] == 'g')
                {
                    if (time > ans)
                    {
                        ans = time;
                    }
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}