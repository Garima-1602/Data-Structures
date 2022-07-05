#include<bits/stdc++.h>
using namespace std;
int main()
{
    int basic={1,2,3};
    array<int,4>a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"first element"<<a.front();
    cout<<"Last element"<<a.back();
}