#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = (n - y) / x * x + y;
        cout << k << "\n";
    }
    return 0;
}