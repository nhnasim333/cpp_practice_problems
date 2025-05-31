#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;
    if (L > R)
        swap(L, R);

    int first_odd = (L % 2 == 0) ? L + 1 : L;
    int last_odd = (R % 2 == 0) ? R - 1 : R;

    if (first_odd > last_odd)
    {
        cout << 0 << endl;
        return 0;
    }

    int n = (last_odd - first_odd) / 2 + 1;
    long long sum = 1LL * n * (first_odd + last_odd) / 2;
    cout << sum << endl;
    return 0;
}