#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pos;
        cin >> pos;
        char col = pos[0];
        char row = pos[1];
        vector<string> moves;
        for (char r = '1'; r <= '8'; ++r)
        {
            if (r != row)
                cout << col << r << endl;
        }
        for (char c = 'a'; c <= 'h'; ++c)
        {
            if (c != col)
                cout << c << row << endl;
        }
    }
    return 0;
}