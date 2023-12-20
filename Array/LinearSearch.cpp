#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 4, 6};
    int key = 5;
    bool found = false;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == key)
        {
            found = true;
            cout << i;
            break;
        }
    }
    if (found == false)
    {
        cout << "The key is not present";
    }
}