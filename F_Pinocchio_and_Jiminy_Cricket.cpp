#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 5; ++i)
        cin >> a[i];
    int n;
    cin >> n;
    n = n % 5;
    int b[5];
    for (int i = 0; i < 5; ++i)
    {
        b[i] = a[(i + n) % 5];
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << b[i];
        if (i < 4)
            cout << " ";
    }
    cout << endl;
    return 0;
}