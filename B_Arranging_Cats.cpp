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
        string s, f;
        cin >> s >> f;
        int cnt0to1 = 0, cnt1to0 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0' && f[i] == '1')
                cnt0to1++;
            if (s[i] == '1' && f[i] == '0')
                cnt1to0++;
        }
        cout << max(cnt0to1, cnt1to0) << endl;
    }
    return 0;
}