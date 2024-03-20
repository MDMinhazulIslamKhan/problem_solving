#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    long long int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<long long> v;
    int l = 0, r = 0;
    while (l < N && r < N)
    {
        if (r - l + 1 == K)
        {
            long long int ans = 0;
            for (int i = 0; i < K; i++)
            {
                if (A[i + l] < 0)
                {
                    ans = A[i + l];
                    break;
                }
            }

            v.push_back(ans);
            cout << ans << " ";
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }

    return 0;
}