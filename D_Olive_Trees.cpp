#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum1 = a + b;
    int sum2 = b + c;
    int sum3 = c + a;
    int max_sum = max({sum1, sum2, sum3});
    cout << max_sum << endl;
    return 0;
}