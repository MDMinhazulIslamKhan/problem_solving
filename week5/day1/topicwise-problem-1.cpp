#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> inp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inp.push_back(x);
    }
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        int l = 0, r = n - 1, mid;
        bool flag = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (inp[mid] == q)
            {
                flag = true;
                break;
            }
            else
            {
                if (inp[mid] > q)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}