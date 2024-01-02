#include <iostream>
#include <vector>
using namespace std;
void reversePart(int i, int j, vector<int> &v)
{
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
int display(vector<int> &v)
{
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(4);
    v.push_back(2);
    int k = 3;
    int n = v.size();
    k = k % n;
    reversePart(n - k, n - 1, v);
    reversePart(0, n - k - 1, v);
    reversePart(0, n - 1, v);
    display(v);
}
