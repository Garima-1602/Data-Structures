#include<bits/stdc++.h>
using namespace std;
//shortcut to run code in visual studio is alt+ctrl+n
//to stop code from runnning is alt+ctrl+m
int main()
{
    vector<int>v;
    v.push_back(1);
     v.push_back(3);
      v.push_back(6);
       v.push_back(7);

       cout<<"Find "<<binary_search(v.begin(),v.end(),6)<<endl;
  cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
  cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
  
  int a=3;
  int b=5;
  cout<<"max "<<max(a,b);
   cout<<"min "<<min(a,b);
   swap(a,b);
   cout<<a<<endl;
   string abcd="abcd";
   reverse(abcd.begin(),abcd.end());
   cout<<"Reverse "<<abcd<<endl;
   rotate(v.begin(),v.begin()+1,v.end());
   cout<<"AFTER ROTATE"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }
  sort(v.begin(),v.end()); //work on introsort
}