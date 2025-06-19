#include <bits/stdc++.h>
using namespace std;

char findMissing(char a, char b)
{
    if (a != 'A' && b != 'A')
        return 'A';
    if (a != 'B' && b != 'B')
        return 'B';
    return 'C';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[3];
        for (int i = 0; i < 3; i++)
            cin >> s[i];
        for (int i = 0; i < 3; i++)
        {
            size_t pos = s[i].find('?');
            if (pos != string::npos)
            {
                char row1 = s[i][(pos + 1) % 3];
                char row2 = s[i][(pos + 2) % 3];
                char col1 = s[(i + 1) % 3][pos];
                char col2 = s[(i + 2) % 3][pos];
                cout << findMissing(row1, row2) << "\n";
                break;
            }
        }
    }
    return 0;
}