#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int a)
{
    int reverse = 0;
    while (a > 0)
    {
        reverse = reverse * 10 + a % 10;
        a = a / 10;
    }
    return reverse;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << "Yes" << endl;
        }
        else if (reverseNumber(a) > b)
        {
            cout << "Yes" << endl;
        }
        else if (a > reverseNumber(b))
        {
            cout << "Yes" << endl;
        }
        else if (reverseNumber(a) > reverseNumber(b))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}