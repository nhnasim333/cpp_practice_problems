#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string log;
        cin >> n >> log;

        unordered_map<char, int> timeSpent;
        int solved = 0;

        for (char ch : log)
        {
            timeSpent[ch]++;
        }

        for (auto &entry : timeSpent)
        {
            char problem = entry.first;
            int needed = (problem - 'A' + 1);
            if (entry.second >= needed)
            {
                solved++;
            }
        }
        cout << solved << endl;
    }
    return 0;
}