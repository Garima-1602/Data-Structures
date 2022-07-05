#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    //insertion and deletion at both ends
    d.push_back(1);
    d.push_front(2);
    //d.pop_front();
    cout<<"Print first index element->"<<d.at(1)<<endl;
    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    cout<<"Empty or not"<<d.empty()<<endl;
    cout<<"Before erasing element"<<d.size()<<endl;
    //memory allocate will remain same 
    d.erase(d.begin(),d.begin()+1);//we have to give where to erase
    cout<<"After erasing element"<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<endl;
    }
}