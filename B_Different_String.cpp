#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string r = s;
        sort(r.begin(), r.end());
        if (r == s)
        {
            reverse(r.begin(), r.end());
            if (r == s)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n"
                     << r << '\n';
            }
        }
        else
        {
            cout << "YES\n"
                 << r << '\n';
        }
    }
    return 0;
}