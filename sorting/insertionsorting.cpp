#include<iostream>
using namespace std;
void display(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void insetionsort(int a[],int n){
    for (int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && a[j]<a[j-1]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
int main(){
    int arr[]={2, 4, 3, -1, 30, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    insetionsort(arr,n);
    display(arr,n);
}