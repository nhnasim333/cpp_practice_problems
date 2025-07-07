#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int max_a = 0;
    for (int i = 0; i < n; +i++)
    {
        cin >> a[i];
        if (a[i] > max_a)
            max_a = a[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += max_a - a[i];
    }
    cout << total << endl;
    return 0;
}