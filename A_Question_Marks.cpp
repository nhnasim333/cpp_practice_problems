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
        string s;
        cin >> s;

        vector<int> cnt(4, 0);
        int q = 0;
        for (char ch : s)
        {
            if (ch == 'A')
                cnt[0]++;
            else if (ch == 'B')
                cnt[1]++;
            else if (ch == 'C')
                cnt[2]++;
            else if (ch == 'D')
                cnt[3]++;
            else if (ch == '?')
                q++;
        }

        int score = 0;
        for (int i = 0; i < 4; ++i)
        {
            score += min(cnt[i], n);
        }

        cout << score << endl;
    }
    return 0;
}