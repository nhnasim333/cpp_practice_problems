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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> seen;
        int idx = n - 1;
        while (idx >= 0 && !seen.count(a[idx]))
        {
            seen.insert(a[idx]);
            idx--;
        }
        cout << idx + 1 << endl;
    }
    return 0;
}