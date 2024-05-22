#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    if (c >= r) {
        cout << "CSK";
    }
    else if (r - c >= 18) {
        cout << "RCB";
    }
    else {
        cout << "CSK";
    }
    return 0;
}