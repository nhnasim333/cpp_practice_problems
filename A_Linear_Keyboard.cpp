#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string keyboard, s;
        cin >> keyboard >> s;
        vector<int> pos(26);
        for (int i = 0; i < 26; ++i)
        {
            pos[keyboard[i] - 'a'] = i;
        }
        int total = 0;
        for (size_t i = 1; i < s.size(); ++i)
        {
            total += abs(pos[s[i] - 'a'] - pos[s[i - 1] - 'a']);
        }
        cout << total << endl;
    }
    return 0;
}