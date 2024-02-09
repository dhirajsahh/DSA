#include<iostream>
using namespace std;
void display(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionsort(int a[],int n){
    
    for (int i=0;i<n-1;i++){
        int min=i;
     for (int j=i+1;j<n;j++){
        if (a[j]<a[min]){
            min=j;
        }

     }
       int temp=a[min];
       a[min]=a[i];
       a[i]=temp;
    

    }
   

}
int main(){
 int arr[]={2,4,3,-1,0,6};
 int n=sizeof(arr)/sizeof(arr[0]);
 display(arr,n);
 selectionsort(arr,n);
 display(arr,n);
}