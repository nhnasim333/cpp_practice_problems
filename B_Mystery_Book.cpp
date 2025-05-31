#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string s, result;
    cin >> N >> s;

    for (char c : s)
    {
        if (c != '.')
            result += c;
    }

    if (result.empty())
        cout << "Null" << endl;
    else
        cout << result << endl;

    return 0;
}