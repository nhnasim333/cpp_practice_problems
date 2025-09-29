#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        long long res = (k / 2) * (a - b);
        if (k % 2 == 1)
            res += a;
        cout << res << endl;
    }
    return 0;
}