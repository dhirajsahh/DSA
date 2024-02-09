#include<iostream>
using namespace std;
void display(int arr[],int n){
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
} 
void bubblesort(int arr[],int n){
    int flag=1;
    for (int i=0;i<n-1;i++){
         flag=0;
        for (int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
    }
}
int main(){
    int arr[]={2,4,3,-1,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    bubblesort(arr,n);
    display(arr,n);
}