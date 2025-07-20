#include <bits/stdc++.h>
using namespace std;

int main()
{
    string table;
    cin >> table;
    string hand[5];
    for (int i = 0; i < 5; i++)
        cin >> hand[i];

    for (int i = 0; i < 5; i++)
    {
        if (hand[i][0] == table[0] || hand[i][1] == table[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}