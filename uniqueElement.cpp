#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int uniqueElement(int arr[],int size)
{
    int ans=0; //perform xor operation as o^9=9 ;9^9=0
    for (int i = 0; i < size; i++)
    {
        /* code */ans=ans^arr[i];
    }
    return ans;
}
int main()
{
   int arr[9]={2,3,1,1,9,6,3,6,2};
   int result=uniqueElement(arr,9);
    //printArray(arr,7);
    cout<<"Ans : "<<result;

}
