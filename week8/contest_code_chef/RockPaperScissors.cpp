#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 1;
        cin >> n;
        string s;
        cin >> s;
        char p = s[0];
        for (int i = 1; i < n; i++) {
            char c = s[i];
            if (c != p) {
                ans++;
                p = c;
            }
            else {
                p = 'z';
            }
        }
        cout << ans << endl;
    }
}