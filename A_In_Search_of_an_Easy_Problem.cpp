#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    bool hard = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
        {
            hard = true;
            break;
        }
    }
    if (hard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}