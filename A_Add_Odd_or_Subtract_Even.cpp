#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            int d = b - a;
            cout << (d % 2 ? 1 : 2) << endl;
        }
        else
        {
            int d = a - b;
            cout << (d % 2 == 0 ? 1 : 2) << endl;
        }
    }
    return 0;
}