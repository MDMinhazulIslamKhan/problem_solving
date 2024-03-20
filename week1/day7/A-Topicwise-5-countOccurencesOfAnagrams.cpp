#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, pat;
    cin >> txt >> pat;
    int ans = 0;

    int fre[26] = {0};
    int checkFre[26] = {0};

    for (int i = 0; i < pat.length(); i++)
    {
        fre[pat[i] - 'a']++;
    }

    for (int i = 0; i < txt.length(); i++)
    {
        checkFre[txt[i] - 'a']++;
        if (i >= pat.length())
        {
            checkFre[txt[i - pat.length()] - 'a']--;
        }
        bool flag = true;
        for (int j = 0; j < 26; j++)
        {
            if (checkFre[j] != fre[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
