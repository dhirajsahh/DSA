#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void sort01m1(vector<int>&v){
   int n=v.size();
   int noz=0;
   int noo=0;
   for(int i=0;i<n;i++){
    if(v[i]==0) noz++;
    else noo++;
   }
   for (int i=0;i<n;i++){
    if(i<noz) v[i]=0;
    else v[i]=1;
   }
}
void sort01m2(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            //swap
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    
    display(v);
    // sort01m1(v);
    sort01m2(v);
     display(v);
}