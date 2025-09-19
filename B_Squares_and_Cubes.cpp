#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll count_polycarp_likes(ll n)
{
    ll squares = (ll)sqrt(n);
    ll cubes = (ll)cbrt(n);
    ll sixths = (ll)pow(n, 1.0 / 6.0);
    return squares + cubes - sixths;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << count_polycarp_likes(n) << endl;
    }
    return 0;
}