#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            int diff = abs(a - b);
            int moves = (diff + 2 * c - 1) / (2 * c);
            cout << moves << endl;
        }
    }
    return 0;
}