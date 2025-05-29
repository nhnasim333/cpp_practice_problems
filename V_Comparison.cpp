#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    if (S == '=')
    {
        if (A == B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (S == '<')
    {
        if (A < B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (S == '>')
    {
        if (A > B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}