#include<iostream>
using namespace std;
void Toh(int n,char s,char h,char d){
    if(n==0) return;
        Toh(n-1,s,d,h);
        cout<<s <<"->"<<d<<endl;
        Toh(n-1,h,s,d);
   
}
int main(){
    Toh(3,'A','B','C');
}