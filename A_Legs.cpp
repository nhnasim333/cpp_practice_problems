#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int min_animals = n / 4 + (n % 4 != 0);
        cout << min_animals << endl;
    }
    return 0;
}