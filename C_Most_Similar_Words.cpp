#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }
        int min_diff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = 0;
                for (int k = 0; k < m; k++)
                {
                    diff += abs(words[i][k] - words[j][k]);
                }
                min_diff = min(min_diff, diff);
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}