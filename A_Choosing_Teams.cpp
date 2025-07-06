#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> y(n);
    int eligible = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
        if (y[i] + k <= 5)
            eligible++;
    }
    cout << eligible / 3 << endl;
    return 0;
}