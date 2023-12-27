#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *ptr = &x;
    cout << ptr << endl;  // gives adress
    cout << *ptr << endl; // value
    *ptr = 8;             // updating
    cout << *ptr << endl;
    cout << x;
}