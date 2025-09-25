#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool found = false;
        for (int i = 1; i < n; i++)
        {
            if (s[0] != s[n - 1] || s[0] != s[i - 1] || s[i] != s[n - 1])
            {
                if (s[0] != s[n - 1])
                {
                    found = true;
                    break;
                }
            }
            if (s[0] != s[i - 1] && s[i] != s[n - 1] && s[i - 1] != s[i])
            {
                found = true;
                break;
            }
        }
        if (s[0] != s[n - 1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}