#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long row1 = min(a, m);
        long long row2 = min(b, m);

        long long rem1 = m - row1;
        long long rem2 = m - row2;

        long long total_rem = rem1 + rem2;

        long long c_seated = min(c, total_rem);

        cout << row1 + row2 + c_seated << endl;
    }
    return 0;
}