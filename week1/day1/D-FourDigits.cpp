#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int current = n.length();
    int need = 4 - current;
    string zero(need, '0');
    cout << zero << n;
    return 0;
}