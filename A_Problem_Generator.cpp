#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> cnt(7, 0);
        for (char c : s)
        {
            cnt[c - 'A']++;
        }
        int need = 0;
        for (int i = 0; i < 7; i++)
        {
            if (cnt[i] < m)
            {
                need += m - cnt[i];
            }
        }
        cout << need << endl;
    }
    return 0;
}