#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, c;
        cin >> s >> c;
        int n = s.size();
        char target = c[0];
        bool possible = false;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == target)
            {
                int left = i;
                int right = n - 1 - i;
                if (left % 2 == 0 && right % 2 == 0)
                {
                    possible = true;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}