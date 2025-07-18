#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        sort(x, x + 3);
        int median = x[1];
        int ans = abs(x[0] - median) + abs(x[1] - median) + abs(x[2] - median);
        cout << ans << endl;
    }
    return 0;
}