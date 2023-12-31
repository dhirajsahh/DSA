#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &x)
{
    for (int i = 0; i <= x.size() - 1; i++)
    {
        cout << x[i] << endl;
    }
}
int main()
{
    vector<int> v1;
    vector<int> v2(v1.size());
    int n;
    cout << "enter the size " << endl;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cout << "The entered array is" << endl;
    display(v1);
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        v2.push_back(v1[i]);
    }
    cout << "The sorted array is" << endl;
    display(v2);
}