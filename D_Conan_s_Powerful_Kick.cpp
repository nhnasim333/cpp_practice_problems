#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A1, L1, A2, L2;
    cin >> A1 >> L1;
    cin >> A2 >> L2;

    if (A2 > L2)
    {
        cout << "Win" << endl;
        if (A1 < L1)
        {
            cout << "Yes Rimontada" << endl;
        }
        else
        {
            cout << "No Rimontada" << endl;
        }
    }
    else if (A2 < L2)
    {
        cout << "Lose" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
    return 0;
}