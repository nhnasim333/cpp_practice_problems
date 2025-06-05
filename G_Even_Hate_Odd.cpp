#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int evenSum = 0, oddSum = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                evenSum++;
            else
                oddSum++;
        }

        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << abs((n / 2) - evenSum) << endl;
        }
    }
    return 0;
}