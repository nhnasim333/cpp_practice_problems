#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool color = false;
    for (int i = 0; i < n * m; i++)
    {
        string s;
        cin >> s;
        if (s == "C" || s == "M" || s == "Y")
        {
            color = true;
        }
    }
    if (color)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}