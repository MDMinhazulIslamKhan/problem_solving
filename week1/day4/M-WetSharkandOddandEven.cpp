#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int sum = 0;
    cin >> n;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        if (inp % 2 == 0)
        {
            sum += inp;
        }
        else
        {
            odd.push_back(inp);
        }
    }
    sort(odd.begin(), odd.end());
    int start = 0;
    if (odd.size() % 2 != 0)
    {
        start = 1;
    }
    for (int i = start; i < odd.size(); i++)
    {
        sum += odd[i];
    }
    cout << sum;
    return 0;
}