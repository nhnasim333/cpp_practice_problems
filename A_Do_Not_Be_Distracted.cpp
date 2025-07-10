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
        vector<bool> seen(26, false);
        bool suspicious = false;
        seen[s[0] - 'A'] = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                if (seen[s[i] - 'A'])
                {
                    suspicious = true;
                    break;
                }
                seen[s[i] - 'A'] = true;
            }
        }
        cout << (suspicious ? "NO" : "YES") << endl;
    }
    return 0;
}