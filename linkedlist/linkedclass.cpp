#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next=NULL;
  }
};
class linkedlist
{
public:
  Node *head;
  Node *tail;
  int size;
  linkedlist()
  {
    head = NULL;
    tail = NULL;
    size = 0;
  }
  void display(){
    Node *temp=head;
    while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
  void insertAtend(int val)
  {
    Node *temp = new Node(val);
    if (size == 0)
    {
      head = tail = temp;
    }
    else
    {
      tail->next = temp;
      tail = temp;
    }
    size++;
  }
  void insertAtHead(int val){
    Node*temp=new Node(val);
    if(size==0) head=tail=temp;
    else {
      temp->next=head;
      head=temp;
    }
    size++;
  }

  
};

int main()
{
  linkedlist ll;
  ll.insertAtend(20);
  ll.display();
  ll.insertAtend(10);
  ll.display();
  ll.insertAtend(30);
  ll.display();
  ll.insertAtHead(60);
  ll.display();
   ll.insertAtHead(70);
  ll.display();
}