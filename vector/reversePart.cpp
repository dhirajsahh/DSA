#include <iostream>
#include <vector>
using namespace std;
void reversePart(int i, int j, vector<int> &v)
{
    int n = v.size();
    while (i <= j)
    {
        int temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(6);
    v.push_back(7);
    v.push_back(7);
    reversePart(0, 3, v);
    display(v);
}
