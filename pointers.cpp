#include<bits/stdc++.h>
using namespace std;
int main()
{/*
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

    int num =5;
    int a=num;
    a++;
    cout<<num<<endl;

    int *p=&num;
    cout<<"Before: "<<num<<endl;
    (*p)++;
     cout<<"After: "<<num<<endl;

//copying one pointer into another
int *q=p;
cout<<p<<" "<<q<<endl;
cout<<*p<<" "<<*q<<endl; 
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << f << " " << p<<endl;
int b = 10;
int *a = &b;
cout<<a<<endl;
cout<<&a<<endl; */
 char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
    return 0;
}