#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}