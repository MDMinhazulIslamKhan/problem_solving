#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, ans = 0;
        cin >> N;
        string S;
        cin >> S;
        for (int i = 1; i < N; i++)
        {
            if (S[i - 1] == S[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}