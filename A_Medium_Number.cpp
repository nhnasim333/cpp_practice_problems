#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mid = a + b + c - max({a, b, c}) - min({a, b, c});
        cout << mid << endl;
    }
    return 0;
}