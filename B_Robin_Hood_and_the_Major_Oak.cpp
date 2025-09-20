#include <bits/stdc++.h>
using namespace std;

bool is_even_leaves(long long n, long long k)
{
    long long L = max(1LL, n - k + 1);
    long long R = n;
    long long even_count = R / 2 - (L - 1) / 2;
    int leaves_parity = 0;
    for (long long i = L; i <= R && i <= L + 50; ++i)
    {
        leaves_parity ^= (__builtin_parityll(pow(i, i)));
    }
    if (R - L + 1 > 50)
    {
        long long odds = (R - L + 1) - even_count;
        leaves_parity ^= odds % 2;
    }
    return leaves_parity == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long L = max(1LL, n - k + 1);
        long long R = n;
        long long odd_count = (R + 1) / 2 - (L / 2);
        if (odd_count % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}