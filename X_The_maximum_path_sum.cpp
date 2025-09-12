#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n, m;

int maxPath(int i, int j)
{
    if (i == n - 1 && j == m - 1)
        return a[i][j];
    if (i >= n || j >= m)
        return INT_MIN;
    return a[i][j] + max(maxPath(i + 1, j), maxPath(i, j + 1));
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    
    cout << maxPath(0, 0) << endl;

    return 0;
}