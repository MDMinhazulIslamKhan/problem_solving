#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int numbers[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int smallF = min(a,b);
        int smallS = min(c,d);
        int bigF = max(a,b);
        int bigS = max(c,d);

        if(smallF == smallS && bigF == bigS) {
            cout << "YES" << endl;
            continue;
        }
        bool sameSide1;

        if(smallF < smallS && bigF > smallS) {
            sameSide1 = true;
        } else {
            sameSide1 = false;
        }
        bool sameSide2;
        if(smallF < bigS && bigF > bigS) {
            sameSide2 = true;
        } else {
            sameSide2 = false;
        }
        
        if(sameSide1 == sameSide2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
    
    return 0;
}   