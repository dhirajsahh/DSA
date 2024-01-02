#include<iostream>
using namespace std;
class Node{
public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
     
     Node temp=a;
     while(1){
      cout<<temp.val<< " ";
      if (temp.next==NULL) break;
      temp=*(temp.next);
     }
    

    // cout<<(*(a.next)).val<<endl;
    // cout<<(*(*(*(a.next)).next).next).val<<endl;
    // cout<<&c<<endl;
    // cout<<(((a.next)->next)->next)->val<<endl;

    // cout<<(a.next)->val<<endl; 
    // // cout<<(*(a.next)).next<<endl;
    // cout<<((a.next)->next)->val<<endl;
    // cout<<(((a.next)->next)->next)->val<<endl;
//    cout<<a.next<<endl;
//    cout<<&b<<endl;
//    cout<<b.next<<endl;
//    cout<<c.next<<endl;
}
