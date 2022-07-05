#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    //initialisation of vector
    vector<int>a[5,1]; //size is 5 and initialise with all by 1
    cout<<"values of a are "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<"size "<<v.capacity()<<endl; //memory assigned
    v.push_back[1];
     cout<<"size "<<v.capacity()<<endl; //memory assigned
     v.push_back[2];
     cout<<"size "<<v.capacity()<<endl; //memory assigned
     v.push_back[3];
     cout<<"size "<<v.capacity()<<endl; //memory assigned
     v.push_back[4];
     cout<<"size "<<v.capacity()<<endl; //memory assigned
     cout<<"First element "<<v.front()<<endl;
     cout<<"Last Element "<<v.back()<<endl;
     cout<<"Before pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
        }cout<<endl;
     v.pop_back();//remove last element
     cout<<"After pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
       }cout<<endl;

       //before clear size
       //clear makes the size 0 not the capacity
       cout<<"before "<<v.size()<<endl;
       v.clear();
       cout<<"After "<<v.size()<<endl;

}