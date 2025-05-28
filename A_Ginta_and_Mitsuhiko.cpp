#include <iostream>
using namespace std;

int main()
{
    char col_char;
    int row_num;
    cin >> col_char >> row_num;

    int col_num = col_char - 'A' + 1;

    if ((col_num + row_num) % 2 == 0)
        cout << "Black square" << endl;
    else
        cout << "White square" << endl;

    return 0;
}