#include <iostream>
using namespace std;

void swapnum(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int x = 5, y = 6;
    swapnum(&x, &y);
    cout << x << endl
         << y;
}