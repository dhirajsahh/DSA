#include<iostream>
#include<vector>
using namespace std;
void countGreaterX(int x,vector<int>&v){
    int count=0;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    int x=5;
    countGreaterX(x,v);

}