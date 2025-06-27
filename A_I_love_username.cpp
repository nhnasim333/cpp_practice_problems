#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> points[i];
    }
    int amazing = 0;
    int mn = points[0], mx = points[0];
    for (int i = 1; i < n; ++i)
    {
        if (points[i] > mx || points[i] < mn)
        {
            amazing++;
        }
        if (points[i] > mx)
            mx = points[i];
        if (points[i] < mn)
            mn = points[i];
    }
    cout << amazing << endl;
    return 0;
}