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
        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if ((int)s.size() == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}