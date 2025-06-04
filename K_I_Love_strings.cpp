#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        int s_len = s.size();
        int t_len = t.size();
        int j = 0, k = 0;
        while (j < s_len && k < t_len)
        {
            cout << s[j] << t[k];
            j++;
            k++;
        }
        while (j < s_len)
        {
            cout << s[j];
            j++;
        }
        while (k < t_len)
        {
            cout << t[k];
            k++;
        }
        cout << endl;
    }
    return 0;
}