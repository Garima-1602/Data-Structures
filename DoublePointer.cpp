#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<p<<endl; //address
    cout<<*p2<<endl;//address
    cout<<i<<endl; //value
    cout<<*p<<endl; //value
    cout<<**p2<<endl; //value


    return 0;
}