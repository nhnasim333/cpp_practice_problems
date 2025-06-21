#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    vector<bool> present(26, false);
    for (char c : s)
    {
        if (isalpha(c))
        {
            present[tolower(c) - 'a'] = true;
        }
    }

    bool isPangram = true;
    for (bool b : present)
    {
        if (!b)
        {
            isPangram = false;
            break;
        }
    }

    cout << (isPangram ? "YES" : "NO") << endl;
    return 0;
}