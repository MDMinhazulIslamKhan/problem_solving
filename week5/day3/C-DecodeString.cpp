#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string input;
        cin >> input;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && input[i + 2] == '0' && input[i + 3] != '0')
            {
                int number = (+input[i] - 48) * 10 + (+input[i + 1] - 48) + 96;
                char letter = number;
                cout << letter;
                i += 2;
            }
            else
            {
                char letter = (+input[i] - 48) + 96;
                cout << letter;
            }
        }
        cout << endl;
    }

    return 0;
}