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
        int n = s.size();
        int first = -1, last = -1;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }
        if (first == -1)
        {
            cout << "0" << endl;
            continue;
        }
        int cnt = 0;
        for (int i = first; i <= last; ++i)
        {
            if (s[i] == '0')
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}