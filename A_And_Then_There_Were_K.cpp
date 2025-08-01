#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; (1 << i) <= n; ++i)
        {
            ans = (1 << i) - 1;
        }
        cout << ans << endl;
    }
    return 0;
}