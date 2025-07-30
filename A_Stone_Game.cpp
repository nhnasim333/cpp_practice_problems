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
        int min_val = n + 1, max_val = 0;
        int min_idx = -1, max_idx = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < min_val)
            {
                min_val = a[i];
                min_idx = i;
            }
            if (a[i] > max_val)
            {
                max_val = a[i];
                max_idx = i;
            }
        }
        int left = max(min_idx, max_idx);
        int right = n - 1 - min(min_idx, max_idx);
        int both = (min_idx + 1) + (n - max_idx);
        int both2 = (max_idx + 1) + (n - min_idx);
        int answer = min({left + 1, right + 1, both, both2});
        cout << answer << endl;
    }
    return 0;
}