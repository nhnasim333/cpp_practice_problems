#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string result = "";
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
        {
            result += "I hate";
        }
        else
        {
            result += "I love";
        }
        if (i < n)
        {
            result += " that ";
        }
        else
        {
            result += " it";
        }
    }
    cout << result << endl;
    return 0;
}