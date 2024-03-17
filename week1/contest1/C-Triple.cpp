#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int size, ans = -1;
        cin >> size;
        int arr[size];
        map<int, int> mp;
        for (int j = 0; j < size; j++)
        {
            int value;
            cin >> value;
            mp[value]++;
            if (mp[value] >= 3)
            {
                ans = value;
            }
        }
        cout << ans << endl;
    }
    return 0;
}