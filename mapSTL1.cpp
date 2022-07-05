#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="Garima";
    m[2]="Kamboj";
    m[3]="GK";
    m.insert(5,hitesh);
    cout<<"before erase ";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }
    cout<<"finding 13"<<m.count(13)<<endl;
    cout<<"after erase ";
    m.erase(13); //o(logn)
    for(auto i:m)
    {
        cout<<i.first<<" "<<f.second<<endl;
    }
    auto it=m.find(5);//print reference if any element present below it then print the same
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }

}