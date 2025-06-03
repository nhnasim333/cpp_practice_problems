#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;
    cout << rows * cols << endl;
    return 0;
}