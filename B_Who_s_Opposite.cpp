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
        int dist = abs(a - b);
        int n = dist * 2;
        if (a > n || b > n || c > n)
        {
            cout << -1 << endl;
            continue;
        }
        int d = c + dist;
        if (d > n)
            d -= n;
        if (d == c)
            cout << -1 << endl;
        else
            cout << d << endl;
    }
    return 0;
}