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
        char max_char = 'a';
        for (char c : s)
        {
            if (c > max_char)
                max_char = c;
        }
        cout << (max_char - 'a' + 1) << endl;
    }
    return 0;
}