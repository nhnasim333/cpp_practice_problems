#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    int prod = x * y;
    int diff = x - y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << prod << endl;
    cout << x << " - " << y << " = " << diff << endl;
    return 0;
}