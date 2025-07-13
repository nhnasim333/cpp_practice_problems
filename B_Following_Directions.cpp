#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int x = 0, y = 0;
        bool found = false;
        for (char move : s)
        {
            if (move == 'L')
                x--;
            else if (move == 'R')
                x++;
            else if (move == 'U')
                y++;
            else if (move == 'D')
                y--;
            if (x == 1 && y == 1)
                found = true;
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}