#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, ans = "None";
    cin >> s;
    int check = 97;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (+s[i] < check)
        {
            continue;
        }
        else if (+s[i] == check)
        {

            check += 1;
        }
        else
        {

            ans = check;
            break;
        }
    }
    if (check < 123)
    {
        ans = check;
    }

    cout << ans;
    return 0;
}