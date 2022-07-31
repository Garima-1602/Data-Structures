#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1; //for left half
    int len2=e-mid;//for right half

    //creating two arrays
    int *first=new int[len1];
    int *second=new int[len2];
    //copy values
    int k=s;//main arrayindex
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k++];
    }
    //merge 2 sorted arrays
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[k++]=first[index1++];
    }
    while(index2<len2)
    {
         arr[k++]=second[index2++];
    }
}
void mergeSort(int *arr,int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    //left part sort 
    mergeSort(arr,s,mid);
    //right par sort 
    mergeSort(arr,mid+1,e);
    //merge
    merge(arr,s,e);

}
int main()
{
    int arr[15]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n=15; //size of array
    mergeSort(arr,0,n-1);
    //printing array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}