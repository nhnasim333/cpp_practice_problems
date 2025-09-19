#include <bits/stdc++.h>
using namespace std;

long long kth_root_floor(long long n, int k, long long r_init)
{
    long long l = 0, r = r_init, ans = 0;
    while (l <= r)
    {
        long long m = (l + r) >> 1;
        __int128 p = 1;
        for (int i = 0; i < k; ++i)
        {
            p *= m;
            if (p > n)
                break;
        }
        if (p <= n)
        {
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ans;
}

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        long long n;
        cin >> n;

        long long sq = kth_root_floor(n, 2, 1000000);
        long long cb = kth_root_floor(n, 3, 100000);
        long long sixth = kth_root_floor(n, 6, 10000);

        cout << (sq + cb - sixth) << endl;
    }
    return 0;
}
