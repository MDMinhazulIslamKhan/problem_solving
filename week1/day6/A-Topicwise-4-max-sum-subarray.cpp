#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> Arr;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        Arr.push_back(val);
    }
    int l = 0, r = 0;
    long long int ans = 0, sum = 0;
    while (r < N)
    {
        sum += Arr[r];
        if (r - l + 1 == K)
        {
            ans = max(ans, sum);
            sum -= Arr[l];
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    cout << ans;
    return 0;
}