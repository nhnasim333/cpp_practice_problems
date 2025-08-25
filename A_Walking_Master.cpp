#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long k = d - b;
        long long l = a + k - c;

        if (k < 0 || l < 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << k + l << endl;
        }
    }
    return 0;
}