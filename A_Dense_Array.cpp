#include <bits/stdc++.h>
using namespace std;

int min_inserts_to_dense(const vector<int> &a)
{
    int res = 0;
    for (size_t i = 0; i + 1 < a.size(); i++)
    {
        int x = a[i], y = a[i + 1];
        int mn = min(x, y), mx = max(x, y);
        while (mx > 2 * mn)
        {
            res++;
            mn *= 2;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &val : a)
            cin >> val;
        cout << min_inserts_to_dense(a) << endl;
    }
    return 0;
}