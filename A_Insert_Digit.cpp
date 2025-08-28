#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        string s;
        cin >> n >> d >> s;
        char dc = d + '0';
        bool inserted = false;
        for (int i = 0; i < n; i++)
        {
            if (!inserted && dc > s[i])
            {
                cout << dc;
                inserted = true;
            }
            cout << s[i];
        }
        if (!inserted)
            cout << dc;
        cout << endl;
    }
    return 0;
}