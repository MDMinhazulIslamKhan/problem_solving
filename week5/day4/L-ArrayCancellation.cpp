#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, pos = 0, neg = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                int canReduce = arr[i] > neg ? neg : arr[i];
                pos += arr[i];

                // cout << "p " << canReduce << " => ";
            }
            else
            {
                int canReduce = (-arr[i]) > pos ? pos : (-arr[i]);
                // cout << "n " << canReduce << " => ";
                pos -= canReduce;
                if (canReduce != (-arr[i]))
                {
                    neg += abs(canReduce - (-arr[i]));
                }
            }
        }
        cout << pos << endl;
    }

    return 0;
}