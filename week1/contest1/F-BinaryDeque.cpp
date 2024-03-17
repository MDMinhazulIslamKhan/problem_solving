#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int size, total, ans = 0, sum = 0;
        cin >> size >> total;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
            {
                sum++;
            }
        }
        // if required more then sum
        if (sum < total)
        {
            cout << -1 << endl;
            continue;
        }
        int l = 0, r = size - 1;
        while (sum > total && l <= r)
        {
            sum--;
            if (arr[l] == 1)
            {
                ans++;
                l++;
            }
            else if (arr[r] == 1)
            {
                ans++;
                r--;
            }
            else
            {
                cout << "ans";
                int currentL = l, currentR = r;
                for (int j = 0; j < (currentL + currentL) / 2; j++)
                {
                    ans++;
                    if (arr[currentL] == 1)
                    {
                        l += j;
                        break;
                    }
                    else if (arr[currentR] == 1)
                    {
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}