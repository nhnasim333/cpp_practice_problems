#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[5] = {0};
    for (char c : s)
    {
        if (c == 'E' || c == 'e')
            freq[0]++;
        else if (c == 'G' || c == 'g')
            freq[1]++;
        else if (c == 'Y' || c == 'y')
            freq[2]++;
        else if (c == 'P' || c == 'p')
            freq[3]++;
        else if (c == 'T' || c == 't')
            freq[4]++;
    }
    int min = freq[0];
    for (int i = 1; i < 5; i++)
    {
        if (freq[i] < min)
            min = freq[i];
    }
    cout << min << endl;
    return 0;
}