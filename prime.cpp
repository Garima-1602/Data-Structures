#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {return 0;}
    }
    return 1;
}
int main()
{
   int n;
   cin>>n;
   bool found=isPrime(n)

   if(found)
   {
    cout<<"Number is prime!";
   }
   else
   {cout<<"Not prime";
   }
   return 0;
}