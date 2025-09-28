#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int count_n = 0, count_z = 0, count_e = 0, count_r = 0, count_o = 0;
    for (char c : s)
    {
        if (c == 'n')
            count_n++;
        else if (c == 'z')
            count_z++;
        else if (c == 'e')
            count_e++;
        else if (c == 'r')
            count_r++;
        else if (c == 'o')
            count_o++;
    }

    int ones = count_n;
    count_o -= ones;
    count_e -= ones;

    int zeros = count_z;

    vector<int> result;
    for (int i = 0; i < ones; ++i)
        result.push_back(1);
    for (int i = 0; i < zeros; ++i)
        result.push_back(0);

    for (size_t i = 0; i < result.size(); ++i)
    {
        if (i > 0)
            cout << " ";
        cout << result[i];
    }
    cout << endl;
    return 0;
}