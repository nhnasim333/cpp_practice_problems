#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long A = max({b, c}) - a + 1;
        long long B = max({a, c}) - b + 1;
        long long C = max({a, b}) - c + 1;
        if (A < 0)
            A = 0;
        if (B < 0)
            B = 0;
        if (C < 0)
            C = 0;
        cout << A << " " << B << " " << C << endl;
    }
    return 0;
}