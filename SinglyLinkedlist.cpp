#include<bits/stdc++.h>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
     //constructor in linked list
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for the value "<<value<<endl;
    }
};
//reference is created to avoid copy of that and make changes in original list only
void insertAtHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
   // tail=tail->next;
   tail=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
    //insert at start
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    //updating the tail here
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    //creating node for d or inserting at given position
    Node *nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
//deletion
void deleteNode(int position,Node* &head)
{
    //deleting first or start node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        //memory free for start node
        temp->next=NULL;
        delete temp;
    }
    else{
          //deleting any middle node or last node
          Node* curr=head;
          Node* prev=NULL;
          int cnt=1;
          while(cnt<=position)
          {
            prev=curr;
            curr=curr->next;
            cnt++;
          }
          prev->next=curr->next;
          curr->next=NULL;
          delete curr;
    }
}
//how to traverse linked list
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    //creating new node
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
   
    //head pointed to node1
    Node *head=node1;
    Node* tail=node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
 insertAtTail(tail,15);
 print(head);
 insertAtPosition(tail,head,4,22);
 print(head);
 //to verify tail and head
 cout<<"head "<<head->data<<endl;
 cout<<"tail "<<tail->data<<endl;
 deleteNode(1,head);
 print(head);
    return 0;
}
