#include<bits/stdc++.h>
using namespace std;
int main()
{
    //understanding basic implementation of priority queue
    priority_queue<int>q;
    //push element
    
    q.push(10);
    q.push(5);
    q.push(100);
    q.push(80);
    q.push(200);
    q.push(12);
    cout<<"Top: "<<q.top()<<endl;
    //by default print in decreasing order i.e first element is the largest one
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
    return 0;
}