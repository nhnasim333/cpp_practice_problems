#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        vector<int> s = {s1, s2, s3, s4};
        sort(s.begin(), s.end());
        int mx1 = s[3], mx2 = s[2];

        int w1 = max(s1, s2);
        int w2 = max(s3, s4);

        if ((w1 == mx1 && w2 == mx2) || (w1 == mx2 && w2 == mx1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}