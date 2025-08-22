#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    int moves = 0;
    for (int i = 0; i < n; ++i)
    {
        int d1 = a[i] - '0';
        int d2 = b[i] - '0';
        int diff = abs(d1 - d2);
        moves += min(diff, 10 - diff);
    }
    cout << moves << endl;
    return 0;
}