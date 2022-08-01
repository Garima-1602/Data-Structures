#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s]; //considering first element as pivot
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        //to count elements smaller than pivot element
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
   //firstly placing pivot at right place
   int pivotIndex=s+count;
   //swapping pivot element with pivotIndex value
   swap(arr[pivotIndex],arr[s]);
   //now check left and right part 
   int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j++;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i],arr[j])
            i++;
            j--;
        }
    }
    return pivotIndex;

}
void quickSort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //partition 
    int p=partition(arr,s,e);
    //recursion
    //sorting left part
    quickSort(arr,s,p-1);
    //sorting right part
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[5]={5,2,8,1,9};
    int n =5;

    quickSort(arr,0,n-1);
    //printing elements after sorting 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}