#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        string outStr;
        cin >> str;
        outStr.resize(str.length());
        set<char> s;
        for (int i = 0; i < str.length(); i++)
        {
            s.insert(str[i]);
            int j = i - 1;
            if(i == 0) {
                j = str.length() - 1;
            }
            outStr[j] = str[i];
        }
        int letter = 0;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            letter++;
        }
        if (letter > 1) {
            cout << "YES" << endl;
            cout << outStr << endl;
        } else {
            cout << "NO" << endl;
        }        
    }

    return 0;
}