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

    int l = 0, r = 0, ans[a + b], p = 0;

    while (l < a)
    {
        int valA = arrA[l];
        while (r < b && arrB[r] <= valA)
        {
            ans[p] = arrB[r];
            r++;
            p++;
        }

        ans[p] = arrA[l];
        l++;
        p++;
    }

    while (r < b)
    {
        ans[p] = arrB[r];
        r++;
        p++;
    }

    for (int i = 0; i < a + b; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}