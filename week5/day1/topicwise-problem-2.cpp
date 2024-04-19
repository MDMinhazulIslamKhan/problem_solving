#include <bits/stdc++.h>
#define ll long long int
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
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, ans = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key >= inp[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}