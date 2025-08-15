#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        bool ok = true;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] > d)
                ok = false;
        }
        if (ok)
        {
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(), a.end());
        if (a[0] + a[1] <= d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}