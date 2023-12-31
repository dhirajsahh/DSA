#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // you need not mention the size
    v.push_back(6);
    // cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(8);
    // cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(9);
    // cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.capacity() << endl;
    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
}