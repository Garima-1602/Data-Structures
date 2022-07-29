#include<bits/stdc++.h>
using namespace std;
bool binary(int *arr,int start,int end,int key)
{
    //base case
    if(start>end)
      return false;
      int mid=start+(end-start)/2;
    if(arr[mid]==key)
    {
         return true;
    }
    if(arr[mid]<key)
    {
        return binary(arr,mid+1,end,key);
    }
    else{
        return binary(arr,start,mid-1,key);
    }
}
int main()
{
   int arr[5]={2,4,9,10,15};
   int size=55;
   int key=10;
   bool ans=binary(arr,0,size-1,key);
   if(ans)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
   return 0;
}