#include <bits/stdc++.h>
using namespace std;

bool can_erase(const string &s)
{
    int a = 0, b = 0, c = 0;
    for (char ch : s)
    {
        if (ch == 'A')
            ++a;
        else if (ch == 'B')
            ++b;
        else if (ch == 'C')
            ++c;
    }
    return (b == a + c);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool result = can_erase(s);
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}