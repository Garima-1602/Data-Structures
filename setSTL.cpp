#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    s.erase(s.begin());
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
      cout<<"5 is present or not-> "<<s.count();
      //if element find
      set<int>::iterator itr=s.find(5);
      for(auto it=itr;it!=s.end();it++)
      {
        cout<<"Value present at iterator->"<<*it<<endl;
      }
      

}