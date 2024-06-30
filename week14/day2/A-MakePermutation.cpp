#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int val = 1;
        bool flag = true;
        for (int i = 0;i < n;i++) {
            if (arr[i] == val) {
                val++;
                continue;
            }
            else {
                if (arr[i] > val) {
                    flag = false;
                    break;
                }
                val++;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}