#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int len = word.size();

    for (int i = 0; i < len; ++i)
    {
        if (i + 4 && word[i] == 'E' && word[i + 1] == 'G' && word[i + 2] == 'Y' && word[i + 3] == 'P' && word[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
        }
        else
        {
            cout << word[i];
        }
    }
    return 0;
}