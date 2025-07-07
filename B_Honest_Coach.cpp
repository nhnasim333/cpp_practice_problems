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
        vector<int> s(n);
        for (int i = 0; i < n; ++i)
            cin >> s[i];
        sort(s.begin(), s.end());
        int min_diff = 1e9;
        for (int i = 1; i < n; ++i)
        {
            min_diff = min(min_diff, s[i] - s[i - 1]);
        }
        cout << min_diff << endl;
    }
    return 0;
}