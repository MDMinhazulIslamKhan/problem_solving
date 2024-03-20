#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcd(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int lcdTotal(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = lcd(result, arr[i]);
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int inp[n];
        for (int j = 0; j < n; j++)
        {
            cin >> inp[j];
        }
        int x = sizeof(inp) / sizeof(inp[0]);

        cout << lcdTotal(inp, x) << endl;

        // cout << ans << "\n";
    }
}
