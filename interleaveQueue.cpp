#include<bits/stdc++.h>
using namespace std;
//using queue only
void interLeaveQueue(queue<int>&q)
{
   //to check input numbers are even or not
   if(q.size()%2 !=0)
   {
    cout<<"Enter Even input numbers!";
   }
   //initiliase new queue of int size
   queue<int>temp;
   int half=q.size()/2;
   for(int i=0;i<half;i++)
   {
    //push first half elements into new queue
    temp.push(q.front());
    q.pop();
   }
   //then push fron new queue and original queue
   while(!temp.empty())
   {
    q.push(temp.front());
    q.push(q.front());
    q.pop();
    temp.pop();
   }
}
int main()
{
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interLeaveQueue(q);
    int len=q.size();
    //loop for printing the final output or queue
    for(int i=0;i<len;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}