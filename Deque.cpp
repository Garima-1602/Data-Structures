#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>q;
    q.push_front(12);
    q.push_back(14);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_front();//den 12 will be remove
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;

}