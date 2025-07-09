#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int next = n + 1;
    while (!is_prime(next))
        next++;
    if (next == m)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}