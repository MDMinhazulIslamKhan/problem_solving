#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, wrong = 0, right = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            char inp;
            cin >> inp;
            if (inp == ')' && right == 0)
            {
                wrong++;
            }
            else if (inp == ')' && right != 0)
            {
                right--;
            }
            else
            {
                right++;
            }
        }
        cout << wrong << endl;
    }
    return 0;
}