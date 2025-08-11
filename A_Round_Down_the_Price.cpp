#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;

        long long round = 1;
        while (round * 10 <= m)
        {
            round *= 10;
        }
        cout << (m - round) << endl;
    }
    return 0;
}