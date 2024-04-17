#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, b;
        cin >> n >> b;

        int arr[n];
        vector<int> subsequenceElement;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((arr[i] & b) == b)
                subsequenceElement.push_back(arr[i]);
        }
        if (subsequenceElement.empty())
        {
            cout << "NO" << endl;
        }
        else
        {

            int ans = subsequenceElement[0];
            for (int i = 1; i < subsequenceElement.size(); i++)
            {
                ans &= subsequenceElement[i];
            }
            if (ans == b)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}