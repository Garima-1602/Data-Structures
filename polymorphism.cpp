#include<bits/stdc++.h>
using namespace std;
 class A{
   public:
   void sayHello()
   {
    cout<<"Hello Garima"<<endl;
   }
   int sayHello(string name,int n)
   {
    cout<<"Hello GK"<<endl;
    return n;
   }
   void sayHello(string name)
   {
    cout<<"Hello"<<endl;
   }
 };
 int main()
 {
    A obj;
    obj.sayHello();
    return 0;
 }