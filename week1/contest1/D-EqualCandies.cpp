#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int totalBox, min = INT_MAX, ans = 0;
        cin >> totalBox;
        int arr[totalBox];
        for (int j = 0; j < totalBox; j++)
        {
            cin >> arr[j];
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }
        for (int j = 0; j < totalBox; j++)
        {
            if (arr[j] > min)
            {
                ans += (arr[j] - min);
            }
        }
        cout << ans << endl;
    }
    return 0;
}