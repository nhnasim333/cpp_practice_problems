#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string expr;
        cin >> expr;
        int a = expr[0] - '0';
        int b = expr[2] - '0';
        cout << a + b << endl;
    }
    return 0;
}