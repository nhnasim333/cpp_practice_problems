#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int P;
        cin >> P;
        int a = 2;
        int r = P % a;
        int b = P - r;
        cout << a << " " << b << endl;
    }
    return 0;
}