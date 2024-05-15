#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, can, left;
        int  oneToNine[10] = { 0,1,3,6,10,15,21,28,36,45 };
        cin >> n;
        can = n / 9;
        left = n - (can * 9);
        cout << can * 45 + oneToNine[left] << endl;
    }
}