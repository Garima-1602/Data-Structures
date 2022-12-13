#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    cout<<" the size of queue is: "<<q.size()<<endl;
    cout<<"The front element: "<<q.front()<<endl;
    q.pop();
    cout<<"Front element: "<<q.front()<<endl;
    //to check queue is empty of not
    if(q.empty())
    {
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
  
    return 0;
}