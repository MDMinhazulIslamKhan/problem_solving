#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> mySet;

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            mySet.insert(arr[j]);
        }

        int l = 0, r = n - 1;
        bool flag = true;
        while (l <= r)
        {
            if (arr[l] != arr[r])
            {
                flag = false;
                break;
            }
            l++;
            r--;
        }
        if (flag)
        {
            cout << "YES" << endl;
            continue;
        }

        for (auto a : mySet)
        {
            l = 0, r = n - 1;
            while (l <= r)
            {
                if (l >= r)
                {
                    flag = true;
                    break;
                }
                if (arr[l] == arr[r])
                {
                    l++;
                    r--;
                    continue;
                }

                if (arr[l] == a)
                {
                    l++;
                }
                else if (arr[r] == a)
                {
                    r--;
                }
                else
                {
                    break;
                }
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