#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0, count = 0, l = 0, r = 0;
    while (r < n)
    {

        sum += arr[r];
        if (sum == x) {
            count++;
            sum -= arr[l];
            l++;
        }
        else if (sum > x)
        {
            while (sum > x)
            {
                sum -= arr[l];
                l++;
            }
            if (sum == x) {
                count++;
                sum -= arr[l];
                l++;
            }
        }
        // cout << sum << " " << count << endl;
        r++;
    }



    cout << count;

    return 0;
}