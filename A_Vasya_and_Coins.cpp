#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == 0)
            cout << 1 << endl;
        else
            cout << a + b * 2 + 1 << endl;
    }
    return 0;
}