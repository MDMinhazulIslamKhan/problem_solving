#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> diffArray(n + 2);

    for (int i = 1; i <= n; i++)
    {
        diffArray[i] = arr[i] - arr[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        diffArray[l + 1] += x;
        diffArray[r + 2] -= x;
    }


    for (int i = 1; i <= n; i++)
    {
        diffArray[i] = diffArray[i] + diffArray[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << diffArray[i] << " ";
    }

    return 0;
}

/*

5 3 ==> n q
2 5 9 4 12 ==> array


Qusetion => add this q value's from l to r


1 3 2 ==> l r value
2 4 3
0 4 2

*/

