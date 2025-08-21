#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long D = r - l;
        long long k = (1 + sqrt(1 + 8.0 * D)) / 2;
        while ((k - 1) * k > 2 * D)
            --k;
        while ((k)*k - k - 2 * D <= 0)
            ++k;
        if ((k - 1) * k > 2 * D)
            --k;
        cout << max(1LL, k) << endl;
    }
    return 0;
}