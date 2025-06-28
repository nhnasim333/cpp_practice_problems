#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double max_gap = 0.0;
    for (int i = 1; i < n; ++i)
    {
        double gap = a[i] - a[i - 1];
        if (gap > max_gap)
            max_gap = gap;
    }
    double ans = max(max_gap / 2.0, max(a[0] - 0.0, l - a[n - 1] + 0.0));
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}