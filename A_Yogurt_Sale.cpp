#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int pairs = n / 2;
        int singles = n % 2;
        int cost = pairs * min(b, 2 * a) + singles * a;
        cout << cost << endl;
    }
    return 0;
}