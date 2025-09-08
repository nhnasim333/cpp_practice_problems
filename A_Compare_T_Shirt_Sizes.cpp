#include <bits/stdc++.h>
using namespace std;

int compare(const string &a, const string &b)
{
    if (a == b)
        return 0;

    char last_a = a.back();
    char last_b = b.back();

    if (last_a != last_b)
    {
        if (last_a == 'M')
        {
            return (last_b == 'S') ? 1 : -1;
        }
        else if (last_a == 'S')
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }

    int xa = a.size() - 1;
    int xb = b.size() - 1;

    if (last_a == 'S')
    {
        if (xa < xb)
            return 1;
        if (xa > xb)
            return -1;
        return 0;
    }
    else if (last_a == 'L')
    {
        if (xa < xb)
            return -1;
        if (xa > xb)
            return 1;
        return 0;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int cmp = compare(a, b);
        if (cmp < 0)
            cout << "<" << endl;
        else if (cmp > 0)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}