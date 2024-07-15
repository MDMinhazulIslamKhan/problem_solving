#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;


    int check = 0;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || s[i] != st.top())
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
            check++;
        }
    }

    if (check % 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}