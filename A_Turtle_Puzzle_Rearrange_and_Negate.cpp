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
        for (int &x : a)
            cin >> x;
        sort(a.begin(), a.end(), greater<int>());
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i)
            prefix[i + 1] = prefix[i] + a[i];
        int total = prefix[n];
        int result = total;
        for (int l = 0; l < n; ++l)
        {
            for (int r = l; r < n; ++r)
            {
                int seg_sum = prefix[r + 1] - prefix[l];
                int curr = total - 2 * seg_sum;
                result = max(result, curr);
            }
        }
        cout << result << endl;
    }
    return 0;
}