#include<bits/stdc++.h>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
     Node(int d)
     {
        this->data=d;
        this->next=NULL;
     }
     ~Node(){
     int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for "<<val<<endl;
     }
};
void deleteNode(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"List is empty,please check again"<<endl;
        return;
    }
    else{
        //non-empty
        //assuming that value is present in linked list
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
void insertNode(Node* &tail,int element,int d)
{
    //assuming that the element is present in the list
    if(tail==NULL)
    {
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        //assuming that the element is present in the list
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* tail)
{
    Node* temp=tail;
    do{
          cout<<tail->data<<" ";
          tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main()
{
    Node* tail=NULL;
    //empty list insertion
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    return 0;
}