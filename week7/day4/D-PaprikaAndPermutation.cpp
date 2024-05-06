// not solved

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
        bool flag = true;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        set<int> st;
        vector<int> extra;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] > n)
            {
                extra.push_back(arr[i]);
            }
            else
            {
                st.insert(arr[i]);
            }
        }

        set<int> full_set;
        for (int i = 1; i <= n; ++i)
        {
            full_set.insert(i);
        }
        for (int val : st)
        {
            full_set.erase(val);
        }
        vector<int> notExist(full_set.begin(), full_set.end());

        for (int i = 0; i < extra.size(); i++)
        {

            if (notExist[i] >= (1.0 * extra[i] / 2))
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << notExist.size() << endl;
            continue;
        }
    }

    return 0;
}