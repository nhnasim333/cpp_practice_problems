#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int pos = 0;
    for (char instr : t)
    {
        if (s[pos] == instr)
        {
            pos++;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}