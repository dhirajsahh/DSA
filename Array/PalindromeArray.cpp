#include <iostream>
using namespace std;

int main()
{
    int arr[] = {'r', 'a', 'c', 'e', 'c', 'a', 'r'};
    int lengthofArray = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = lengthofArray - 1;
    bool palindrome = true;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            palindrome = false;
            cout << "Not a palindrome";
            break;
        }
        i++;
        j--;
    }
    if (palindrome)
    {
        palindrome = true;
        cout << "Palindrome";
    }
}