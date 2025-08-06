#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int min_sum = n * -p;
        int max_sum = n * p;
        if (k < min_sum || k > max_sum)
        {
            cout << -1 << endl;
            continue;
        }
        if (k == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int op = 0;
        int abs_k = abs(k);
        int sign = k > 0 ? 1 : -1;
        int val = sign * p;
        int used = abs_k / p;
        int rem = abs_k % p;
        op = used;
        if (rem)
        {
            op += 1;
        }
        if (used + (rem ? 1 : 0) <= n)
        {
            cout << op << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}