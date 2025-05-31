#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    // Grade for A
    char gradeA;
    if (A < 60)
        gradeA = 'F';
    else if (A <= 69)
        gradeA = 'D';
    else if (A <= 79)
        gradeA = 'C';
    else if (A <= 89)
        gradeA = 'B';
    else
        gradeA = 'A';

    // Grade for B
    char gradeB;
    if (B < 60)
        gradeB = 'F';
    else if (B <= 69)
        gradeB = 'D';
    else if (B <= 79)
        gradeB = 'C';
    else if (B <= 89)
        gradeB = 'B';
    else
        gradeB = 'A';

    cout << gradeA << " " << gradeB << endl;
    return 0;
}