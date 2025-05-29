#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    long long int result = 0;
    if (S == '+')
    {
        result = A + B;
    }
    else if (S == '-')
    {
        result = A - B;
    }
    else if (S == '*')
    {
        result = A * B;
    }

    if (result == C)
    {
        printf("Yes\n");
    }
    else
    {
        printf("%lld\n", result);
    }

    return 0;
}