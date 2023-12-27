#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 8;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int sum = *ptr1 + *ptr2;
    cout << sum;
}