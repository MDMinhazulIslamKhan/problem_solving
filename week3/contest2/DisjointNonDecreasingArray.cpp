#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = INT_MIN;
        bool flag = true;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 1; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int need = arr[j] - arr[j + 1];
                if (ans != INT_MIN && ans != need)
                {
                    flag = false;
                    break;
                }
                else
                {
                    ans = need;
                }
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}