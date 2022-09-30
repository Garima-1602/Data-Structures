#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creating stack using stl
    stack<int>s;
    //insertion in stack
    s.push(4);
    s.push(6);
    //deletion in stack
    s.pop();
    //check top element
    cout<<"Element present at top is : "<<s.top()<<endl;
    //to check stack is empty or not
    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}