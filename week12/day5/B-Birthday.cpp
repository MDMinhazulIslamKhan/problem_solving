#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int mid = n / 2, l = 1, r = 1;
    ans[mid] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0) {
            ans[mid + r] = arr[i];
            r++;
        }
        else {
            ans[mid - l] = arr[i];
            l++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";

    }

    return 0;
}