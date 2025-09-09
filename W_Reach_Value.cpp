#include <bits/stdc++.h>
using namespace std;

bool canReach(long long value, long long n)
{
    if (value == n)
        return true;
    if (value > n)
        return false;
    return canReach(value * 10, n) || canReach(value * 20, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (canReach(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}