#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int height = 0, used = 0, next = 1;
    while (n >= used + next)
    {
        used += next;
        height++;
        next += height + 1;
    }
    cout << height << endl;
    return 0;
}