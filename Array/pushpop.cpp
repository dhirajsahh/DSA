#include <iostream>
using namespace std;
#define size 5
int array[size];
int top = -1;
void push(int num)
{
    if (top == (size - 1))
    {
        cout << "Stack overflow " << endl;
    }
    else
    {
        top = top + 1;
        array[top] = num;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        top = top - 1;
    }
}
void stack_print()
{
    for (int i = top; i >= 0; i--)
    {
        cout << array[i] << endl;
    }
}
int main()
{
    push(10);
    push(12);
    stack_print();
    push(43);
    pop();
    push(23);
    stack_print();
}