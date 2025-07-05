#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;
    while (x)
    {
        count += x & 1;
        x >>= 1;
    }
    cout << count << endl;
    return 0;
}