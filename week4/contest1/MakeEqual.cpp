#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        bool flag = true;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                continue;
            }
            else if (arr[i] < arr[0])
            {
                flag = false;
                break;
            }
        }
        if (flag && arr[0] != arr[N - 1])
        {
            cout << "NO" << endl;
        }
        else if (flag)
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