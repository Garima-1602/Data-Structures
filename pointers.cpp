#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=5;
    int *ptr=&num; //pointer is a variable which store the addresss of another variable
    cout<<num<<endl;
    //address of operrator can be given by &
    cout<<&num;
    cout<<"The value is: "<<*ptr<<endl;
    cout<<"The address is : "<<ptr<<endl;

    double a=4.5;
    double *p=&a;
    cout<<"The value is: "<<*p<<endl;
    cout<<"The address is : "<<p<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of double is "<<sizeof(a)<<endl;
    cout<<"Size of pointer is "<<sizeof(p)<<endl;

    return 0;
}