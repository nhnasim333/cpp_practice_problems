#include <bits/stdc++.h>
using namespace std;

bool can_make_abc(const string &s)
{
    if (s == "abc")
        return true;
    string t = s;
    swap(t[0], t[1]);
    if (t == "abc")
        return true;
    t = s;
    swap(t[0], t[2]);
    if (t == "abc")
        return true;
    t = s;
    swap(t[1], t[2]);
    if (t == "abc")
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << (can_make_abc(s) ? "YES" : "NO") << endl;
    }
    return 0;
}