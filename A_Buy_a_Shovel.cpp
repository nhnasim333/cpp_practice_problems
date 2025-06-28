#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    for (int n = 1; n <= 10; ++n)
    {
        int total = n * k;
        if (total % 10 == 0 || total % 10 == r)
        {
            cout << n << endl;
            return 0;
        }
    }
    return 0;
}