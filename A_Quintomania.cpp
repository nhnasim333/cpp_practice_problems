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
        vector<int> notes(n);
        for (int i = 0; i < n; ++i)
            cin >> notes[i];
        bool perfect = true;
        for (int i = 1; i < n; ++i)
        {
            int diff = abs(notes[i] - notes[i - 1]);
            if (diff != 5 && diff != 7)
            {
                perfect = false;
                break;
            }
        }
        cout << (perfect ? "YES" : "NO") << endl;
    }
    return 0;
}