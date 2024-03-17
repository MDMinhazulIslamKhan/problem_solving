#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        int first = 0, last = 0;
        for (int i = 0; i < 3; i++)
        {
            first += +t[i];
        }
        for (int i = 3; i < 6; i++)
        {
            last += +t[i];
        }
        if (first == last)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}