#include<bits/stdc++.h>
using namespace std;
//encapsulation
class Human{
   public:
   int height;
   int weight;
   int age;
   public:
   int getAge()
   {
    return this->age;
   }
   int setWeight(int w)
   {
       this->weight=w;
   }
};
class Male:public Human
{
public:
string color;
void sleep()
{
    cout<<"Male sleep";
}
};
int main()
{
    Male ob1;
    cout<<ob1.age<<endl;//male inherit human
    cout<<ob1.weight<<endl;
    cout<<ob1.height<<endl;
    cout<<ob1.color<<endl;
    ob1.setWeight(40);
    cout<<ob1.weight<<endl;
    ob1.sleep();
   return 0;
}