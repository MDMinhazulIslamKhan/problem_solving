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

    int count = 0;
    while (l < b)
    {
        int valA = arrB[l];
        while (r < a && arrA[r] < valA)
        {
            r++;
            count++;
        }

        l++;
        cout << count << " ";
    }

    return 0;
}