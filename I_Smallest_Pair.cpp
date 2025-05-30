#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min_pair = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int curr_pair = a[i] + a[j] + j - i;
                min_pair = min(min_pair, curr_pair);
            }
        }
        cout << min_pair << endl;
    }
    return 0;
}