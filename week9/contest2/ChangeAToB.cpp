#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k, ans = 0;
        cin >> a >> b >> k;
        vector<long long int>d;
        long long int temp = b / k;
        while (temp >= a)
        {
            temp = b / k;
            cout << temp << " ";
            // d.push_back(temp);
        }

        // for (auto i : d)
        // {
        //     cout << i << " ";
        // }

        cout << endl;
    }
    return 0;
}