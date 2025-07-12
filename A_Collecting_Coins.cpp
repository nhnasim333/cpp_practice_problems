#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long mx = max({a, b, c});
        long long need = (mx - a) + (mx - b) + (mx - c);
        long long rem = n - need;
        if (rem >= 0 && rem % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}