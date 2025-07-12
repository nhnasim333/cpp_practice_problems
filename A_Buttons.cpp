#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a > b)
            cout << "First" << endl;
        else if (b > a)
            cout << "Second" << endl;
        else
            cout << (c % 2 == 1 ? "First" : "Second") << endl;
    }
    return 0;
}