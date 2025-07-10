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
        int cntA = 0, cntB = 0;
        for (char c : s)
        {
            if (c == 'A')
                cntA++;
            else if (c == 'B')
                cntB++;
        }
        cout << (cntA > cntB ? "A" : "B") << endl;
    }
    return 0;
}