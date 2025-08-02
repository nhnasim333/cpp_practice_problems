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
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; ++i)
            cin >> a[i];
        set<int> used;
        vector<int> p;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (!used.count(a[i]))
            {
                used.insert(a[i]);
                p.push_back(a[i]);
            }
        }
        for (int i = 0; i < n; ++i)
            cout << p[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}