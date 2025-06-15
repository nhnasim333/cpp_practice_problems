#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, hello = "hello";
    cin >> s;
    int j = 0;
    for (char c : s)
    {
        if (c == hello[j])
            j++;
        if (j == 5)
            break;
    }
    cout << (j == 5 ? "YES" : "NO") << endl;
    return 0;
}