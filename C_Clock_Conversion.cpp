#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int hour = stoi(s.substr(0, 2));
        string minute = s.substr(3, 2);

        string period;
        int hour12;
        if (hour == 0)
        {
            hour12 = 12;
            period = "AM";
        }
        else if (hour == 12)
        {
            hour12 = 12;
            period = "PM";
        }
        else if (hour > 12)
        {
            hour12 = hour - 12;
            period = "PM";
        }
        else
        {
            hour12 = hour;
            period = "AM";
        }

        cout << setw(2) << setfill('0') << hour12 << ":" << minute << " " << period << endl;
    }
    return 0;
}