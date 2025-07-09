#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int d = x % 10;
        int len = 0, y = x;
        while (y)
        {
            len++;
            y /= 10;
        }
        int total = (d - 1) * 10 + len * (len + 1) / 2;
        cout << total << endl;
    }
    return 0;
}