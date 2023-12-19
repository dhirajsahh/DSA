#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 9, 6, 8, 9};
    int max1 = arr[0];
    int max2 = arr[1];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    cout << "The first maximum number is" << max1 << endl;
    cout << "The second maximum number is" << max2;
}