#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int min_diff = abs(a[0] - a[n - 1]);
    int best_i = n, best_j = 1;

    for (int i = 1; i < n; i++)
    {
        int diff = abs(a[i] - a[i - 1]);
        if (diff < min_diff)
        {
            min_diff = diff;
            best_i = i;
            best_j = i + 1;
        }
    }

    cout << best_i << " " << best_j << endl;
    return 0;
}