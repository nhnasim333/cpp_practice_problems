#include <bits/stdc++.h>
using namespace std;

const string PI = "314159265358979323846264338327";

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (size_t i = 0; i < s.size() && i < PI.size(); ++i)
        {
            if (s[i] == PI[i])
            {
                ++count;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}