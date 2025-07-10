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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int mn = *min_element(a.begin(), a.end());
        int res = 0;
        for (int x : a)
            res += (x - mn);
        cout << res << endl;
    }
    return 0;
}