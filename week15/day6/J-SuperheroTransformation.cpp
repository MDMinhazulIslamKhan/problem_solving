#include <bits/stdc++.h>

using namespace std;

bool vowelCheck(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
};

int main()
{
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size())
    {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if ((vowelCheck(a[i]) && !vowelCheck(b[i])) || (!vowelCheck(a[i]) && vowelCheck(b[i])))
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}