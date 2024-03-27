// unsolved

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
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int l = 0, r = n - 1, remove = -1;
        bool lFlag = true, rFlag = true;
        while (l < r && l < n && r >= 0)
        {
            if (arr[l] == arr[r])
            {
                l++;
                r--;
            }
            else
            {
                if (remove == -1)
                {
                    remove = arr[l];
                    l++;
                }
                else if (remove == arr[l])
                {
                    l++;
                }
                else if (remove == arr[r])
                {
                    r++;
                }
                else
                {
                    lFlag = false;
                    break;
                }
            }
        }
        if (lFlag)
        {
            cout << "YES" << endl;
            continue;
        }
        l = 0, r = n - 1, remove = -1;
        while (l < r && l < n && r >= 0)
        {
            if (arr[l] == arr[r])
            {
                l++;
                r--;
            }
            else
            {
                if (remove == -1)
                {
                    remove = arr[r];
                    r++;
                }
                else if (remove == arr[r])
                {
                    r++;
                }
                else if (remove == arr[l])
                {
                    l++;
                }
                else
                {
                    rFlag = false;
                    break;
                }
            }
        }
        if (rFlag)
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