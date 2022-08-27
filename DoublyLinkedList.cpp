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
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    cout<<"Length "<<getLength(head);
    return 0;
}