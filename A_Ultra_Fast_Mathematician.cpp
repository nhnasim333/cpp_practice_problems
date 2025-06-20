#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    for (size_t i = 0; i < a.size(); ++i)
    {
        cout << (a[i] != b[i] ? '1' : '0');
    }
    cout << endl;
    return 0;
}