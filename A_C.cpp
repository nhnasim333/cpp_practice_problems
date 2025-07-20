#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        int ops = 0;
        while (max(a, b) <= n)
        {
            if (a < b)
                a += b;
            else
                b += a;
            ops++;
        }
        cout << ops << endl;
    }
    return 0;
}