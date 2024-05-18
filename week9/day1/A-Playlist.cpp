#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int inp[n];

    for (int i = 0; i < n; i++) {
        cin >> inp[i];
    }

    set<long long int> s;
    int count = 0, ans = 0, st = 0;

    for (int i = 0; i < n; i++) {
        if (s.count(inp[i]) == 0) {
            count++;
            s.insert(inp[i]);
        }
        else {
            ans = max(ans, count);
            while (inp[st] != inp[i]) {
                s.erase(inp[st]);
                count--;
                st++;
            }
            st++;
        }
    }
    ans = max(ans, count);
    cout << ans;
    return 0;
}
