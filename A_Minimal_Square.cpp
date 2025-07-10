#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = min(max(a, 2 * b), max(b, 2 * a));
        cout << ans * ans << endl;
    }
    return 0;
}