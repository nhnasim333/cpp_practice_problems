#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result;
    for (size_t i = 0; i < s.size();)
    {
        if (s[i] == '.')
        {
            result += '0';
            i++;
        }
        else if (s[i] == '-' && i + 1 < s.size())
        {
            if (s[i + 1] == '.')
            {
                result += '1';
                i += 2;
            }
            else if (s[i + 1] == '-')
            {
                result += '2';
                i += 2;
            }
        }
    }
    cout << result << endl;
    return 0;
}