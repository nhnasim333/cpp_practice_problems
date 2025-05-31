#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch;
    cin >> s >> ch;
    string res;
    for (char c : s)
    {
        if (c != ch)
        {
            res += c;
        }
    }
    cout << res << endl;
    return 0;
}