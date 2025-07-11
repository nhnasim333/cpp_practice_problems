#include <bits/stdc++.h>
using namespace std;

string colorblind(string s)
{
    for (char &c : s)
    {
        if (c == 'G' || c == 'B')
            c = 'X';
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (colorblind(a) == colorblind(b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}