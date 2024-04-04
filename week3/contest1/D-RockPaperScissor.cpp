// unsolved

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
        char chef[n];
        char chefina[n];
        int chefWin = 0;
        int chefinaWin = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> chef[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> chefina[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (chef[j] == 'R' && chefina[j] == 'S')
            {
                chefWin++;
            }
            else if (chef[j] == 'P' && chefina[j] == 'R')
            {
                chefWin++;
            }
            else if (chef[j] == 'S' && chefina[j] == 'p')
            {
                chefWin++;
            }
            else if (chefina[j] == 'R' && chef[j] == 'S')
            {
                chefinaWin++;
            }
            else if (chefina[j] == 'P' && chef[j] == 'R')
            {
                chefinaWin++;
            }
            else if (chefina[j] == 'S' && chef[j] == 'p')
            {
                chefinaWin++;
            }
        }

        if (chefWin > chefinaWin)
        {
            cout << 0 << endl;
        }
        else
        {
            int need = (chefinaWin - chefWin) + 1;
            int nextWin = chefWin + chefinaWin;
            // cout << chefinaWin << " " << chefWin << " " << (chefinaWin - chefWin) + 1 << endl;
            cout << ceil(1.0 * need / nextWin) << endl;
        }
    }

    return 0;
}