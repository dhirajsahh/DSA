#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int target = 7;
    for (int i = 0; i <= v.size() - 2; i++)
    {
        for (int j = i + 1; j <= v.size() - 1; j++)
        {
            if (v[i] + v[j] == target)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}