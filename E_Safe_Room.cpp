#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}