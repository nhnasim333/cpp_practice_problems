#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            len++;
        }
    }
    cout << len << endl;
    return 0;
}