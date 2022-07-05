#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b ;
    cout<<"Enter value of a and b: "<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter the operation you want to perform: "<<endl;
    cin>>op;
    switch(op)
    {
        case '+':cout<<(a+b)<<endl;break;
        case '-':cout<<(a-b)<<endl;break;
        case '/':cout<<(a/b)<<endl;break;
        case '%':cout<<(a%b)<<endl;break;
        case '*':cout<<(a*b)<<endl;break;
        default: cout<<"ENter valid operation!"<<endl;
    }
    return 0;
}