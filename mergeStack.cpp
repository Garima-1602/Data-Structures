#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
//class for merging stack
class mystack{
    public:
    node* head;
    node* tail;

    mystack()
    {
        head=NULL;
        tail=NULL;
    }
};
mystack* create()
{
    mystack* ms=new create();
    return ms;
}
void push(int data,mystack* ms)
{
    node* temp=new node();
    temp->data=data;
    temp->next=ms->head;
    if(ms->head==NULL)
    {
        ms->tail=temp;
        ms->head=temp;
    }
}
int pop(mystack* ms)
{
    if(ms->head==NULL)
    {
        cout << "stack underflow" << endl;
		return 0;
    }
    else
    {
       node* temp=ms->head;
       ms->head=ms->head->next;
       int pop=temp->data;
       delete temp;
       return pop;
    }
}
//merging stack
void merge(mystack* ms1,mystack* ms2)
{
    if (ms1->head == NULL)
	{
		ms1->head = ms2->head;
		ms1->tail = ms2->tail;
		return;
	}
	ms1->tail->next = ms2->head;
	ms1->tail = ms2->tail;
}

//to display stack
void display(mystack* ms)
{
    node* temp=ms->head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    mystack* ms1=create();//for stack 1
    mystack* ms2=create();//for stack 2
    push(10,ms1);
    push(11,ms1);
    push(12,ms1);
    push(13,ms2);
    push(14,ms2);
    push(15,ms2);
    merge(ms1,ms2);
    display(ms1);
    return 0;
}