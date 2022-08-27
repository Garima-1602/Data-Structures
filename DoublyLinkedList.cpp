#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    //we have to pointer
    Node* prev;
    Node* next;
    //construtor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//calculating the length of  linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    
    return len;
}
//Traversing 
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);//creating new node to insert at head
    temp->next=head;
    head->prev=temp;
    head=temp;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    cout<<"Length "<<getLength(head)<<endl;
    insertAtHead(head,11);
    print(head);
    return 0;
}