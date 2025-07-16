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
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        long long min_a = *min_element(a.begin(), a.end());
        long long min_b = *min_element(b.begin(), b.end());
        long long moves = 0;
        for (int i = 0; i < n; i++)
        {
            long long da = a[i] - min_a;
            long long db = b[i] - min_b;
            moves += max(da, db);
        }
        cout << moves << endl;
    }
    return 0;
}