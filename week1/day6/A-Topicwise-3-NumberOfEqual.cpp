#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int arrA[a], arrB[b];
    for (int i = 0; i < a; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> arrB[i];
    }

    int l = 0, r = 0;
    long long int ans = 0;

    while (l < a && r < b)
    {
        int valA = arrA[l], countA = 0, countB = 0;
        while (arrA[l] == valA && l < a)
        {
            countA++;
            l++;
        }
        while (arrB[r] < valA && r < b)
        {
            r++;
        }
        while (arrB[r] == valA && r < b)
        {
            countB++;
            r++;
        }
        ans += (1LL * countA * countB);
    }
    cout << ans;
    return 0;
}