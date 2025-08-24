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
        vector<vector<string>> words(3, vector<string>(n));
        unordered_map<string, int> freq;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> words[i][j];
                freq[words[i][j]]++;
            }
        }
        vector<int> points(3, 0);
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int f = freq[words[i][j]];
                if (f == 1)
                    points[i] += 3;
                else if (f == 2)
                    points[i] += 1;
            }
        }
        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }
    return 0;
}