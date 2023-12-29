#include <iostream>
using namespace std;
void displayarr(int a[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << a[i] << " ";
    }
}
void insertelement(int a[], int n, int size, int index, int element)
{
    if (index == size || index > size)
    {
        cout << "You cannot insert element in array as it is full" << endl;
        return;
    }
    else if (n < index)
    {

        a[index] = element;
    }
    else
    {
        for (int i = n + 1; i > index; i--)
        {
            a[i] = a[i - 1];
        }
        a[index] = element;
    }
    displayarr(a, n + 1);
}
int main()
{
    int size;
    cout << "Enter the size of the array";
    cin >> size;
    int arr[size];
    int n;
    cout << "How many element you want to enter now" << endl;
    cin >> n;
    cout << "Enter the element" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    displayarr(arr, n);
    cout << endl;
    int index, element;
    cout << "Enter the index you want to enter new element be sure index start from zero" << endl;
    cin >> index;
    cout << "Enter the element you want to add" << endl;
    cin >> element;
    insertelement(arr, n, size, index, element);

    return 0;
}