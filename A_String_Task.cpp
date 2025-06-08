#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i';
}

int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        if (!isVowel(c))
        {
            cout << '.' << (char)tolower(c);
        }
    }
    cout << endl;
    return 0;
}