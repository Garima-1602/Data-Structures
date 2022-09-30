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
    return 0;
}