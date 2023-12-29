#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
void displayarr(int a[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << a[i] << " ";
    }
}
void deleteelement(int a[], int size, int index)
{
    if (index < 0 || index > size)
    {
        cout << "Invalid condition" << endl;
        return;
    }

    else
    {
        for (int i = index; i <= size - 1; i++)
        {
            a[i] = a[i + 1];
        }
    }

    displayarr(a, size - 1);
}
int main()
{
    int size;
    cout << "Enter the size of the array";
    cin >> size;
    int arr[size];

    cout << "Enter the element" << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }
    displayarr(arr, size);
    cout << endl;
    int index;
    cout << "Enter the index you want to delete the element be sure index start from 0" << endl;
    cin >> index;
    cout << "Enter the element you want to add" << endl;

    deleteelement(arr, size, index);

    return 0;
}