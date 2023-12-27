#include <iostream>
using namespace std;
int main()
{

    int x = 8;
    // int x = 8, y = 9;
    // cout << x++ << endl; // gives 8 and for line below this x value become increase by 1
    // int b = x++;

    // // first b=x and then it increment x for lowerline
    // cout << b << endl
    //      << x;
    int *ptr1 = &x;
    cout << *ptr1;        // value of x
    cout << ptr1 << endl; // 0x61ff08
    ptr1 = ptr1 + 1;      // increases adress by 4 as it is pointer variable of int type (hexasum)
    cout << ptr1 << endl; // 0x61ff0c
    bool flag = true;
    bool *ptr = &flag;
    cout << ptr << endl; // 0x61ff03
    ptr = ptr + 1;       // increase by 1 only
    cout << ptr;         // 0x61ff04
}