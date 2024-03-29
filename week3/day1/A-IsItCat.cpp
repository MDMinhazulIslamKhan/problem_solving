#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char inp[n];
        for (int j = 0; j < n; j++)
        {
            char l;
            cin >> l;
            if (l < 97)
            {
                l = l + 32;
            }
            inp[j] = l;
        }
        int l = 0, r = 0;
        bool flag = true;
        char sound[4] = {'m', 'e', 'o', 'w'};
        while (l < n)
        {
            char letter = inp[l];
            if (r > 3 || letter != sound[r])
            {
                flag = false;
                break;
            }

            while (l < n && letter == inp[l])
            {
                l++;
            }
            r++;
        }
        if (r < 4 || !flag)
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