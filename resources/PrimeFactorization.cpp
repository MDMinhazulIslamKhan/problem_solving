#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> count;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) {
            while (n % i == 0)
            {
                count[i]++;
                n /= i;
            }

        }
    }



    for (auto x : count) {
        cout << x.first << " " << x.second << endl;
    }


    return 0;
}