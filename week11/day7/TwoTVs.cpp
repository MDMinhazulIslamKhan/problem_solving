#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> inp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        inp[l]++;
        inp[r + 1]--;
    }
    int sum = 0;
    bool flag = true;
    for (auto i : inp)
    {
        sum += i.second;
        if (sum > 2) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}