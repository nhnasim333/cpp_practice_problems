#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;
    int maxv = max(Y, W);
    int favorable = 7 - maxv;
    int gcd = 1;
    int denom = 6;
    for (int i = 1; i <= favorable && i <= denom; ++i)
    {
        if (favorable % i == 0 && denom % i == 0)
            gcd = i;
    }
    cout << (favorable / gcd) << "/" << (denom / gcd) << endl;
    return 0;
}