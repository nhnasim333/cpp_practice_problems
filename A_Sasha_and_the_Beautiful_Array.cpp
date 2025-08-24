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
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        long long mx = *max_element(a.begin(), a.end());
        long long mn = *min_element(a.begin(), a.end());
        cout << mx - mn << endl;
    }
    return 0;
}