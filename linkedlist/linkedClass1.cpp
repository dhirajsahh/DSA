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
        this->next = NULL;
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
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtTail(int val)
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
    void insertAtHead(int val)
    {

        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void insertAtidx(int idx, int val)
    {
        if (idx < 0 || idx > size - 1)
        {
            cout << "Invalid index" << endl;
            return;
        }
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getElement(int idx)

    {
        if (idx < 0 || idx > size - 1)
        {
            cout << "Invalid Index";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx = size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
};
int main()
{
    linkedlist ll;

    ll.insertAtTail(40);
    ll.display();
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtidx(2, 60);
    ll.display();
    ll.insertAtidx(3, 20);
    ll.display();
    ll.insertAtidx(1, 70);
    ll.display();
    cout << ll.getElement(5) << endl;
    cout << ll.getElement(0) << endl;
    cout << ll.getElement(3) << endl;
}