#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        int mn = 15;

        for (int j = 0; j <= 15; j++)
        {
            for (int k = 0; k <= 15; k++)
            {
                if (((a + j) << k) % 32768 == 0)
                {
                    mn = min(mn, j + k);
                }
            }
        }

        cout << mn << " ";
    }


    return 0;
}