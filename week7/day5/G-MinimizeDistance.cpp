#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int arr[n];

        vector<int> positive;
        vector<int> negative;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                positive.push_back(arr[i]);
            }
            if (arr[i] < 0)
            {
                negative.push_back(-arr[i]);
            }
        }

        sort(positive.begin(), positive.end());
        sort(negative.begin(), negative.end());

        long long int ans = 0;
        int positiveCount = positive.size(), negativeCount = negative.size();
        ;
        for (int i = positiveCount - 1; i >= 0; i -= k)
        {
            ans += (positive[i] * (i < positiveCount - 1 ? 2 : 1));
        }
        for (int i = negativeCount - 1; i >= 0; i -= k)
        {
            ans += (negative[i] * (i < negativeCount - 1 ? 2 : 1));
        }

        if (negativeCount && positiveCount)
        {
            ans += min(positive[positiveCount - 1], negative[negativeCount - 1]);
        }

        cout << ans << endl;
    }

    return 0;
}