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
        string res;
        for (int i = 0; i < n;)
        {
            char c = s[i];
            int j = i + 1;
            while (j < n && s[j] != c)
                ++j;
            res += c;
            i = j + 1;
        }
        cout << res << endl;
    }
    return 0;
}