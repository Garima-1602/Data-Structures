#include<bits/stdc++.h>
using namespace std;
bool linear(int *arr,int size,int key)
{
    //base case
    if(size==0)
      return false;
    if(arr[0]==key)
    {
         return true;
    }
    else{
        bool remainingpart=linear(arr+1,size-1,key);
        return remainingpart;
    }

}
int main()
{
   int arr[5]={2,4,9,8,9};
   int size=5;
   int key=4;
   bool ans=linear(arr,size,key);
   if(ans)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
   return 0;
}