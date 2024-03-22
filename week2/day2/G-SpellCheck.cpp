#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string Timur = "Timur";
    sort(Timur.begin(), Timur.end());
    for (int i = 0; i < t; i++)
    {
        int size;
        cin >> size;
        string inp;
        cin >> inp;
        if (size != Timur.length())
        {
            cout << "NO" << endl;
            continue;
        }
        sort(inp.begin(), inp.end());
        if (inp != Timur)
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