#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v;
   v.push_back(3);
   v.push_back(9);
   v.push_back(1);
   v.push_back(2);
   v.push_back(1);
   v.push_back(9);
   int target = 1;
   for (int i = v.size() - 1; i >= 0; i--)
   {
      if (v[i] == target)
      {
         cout << "Last occurance index is " << i << endl;
         break;
      }
   }
}