#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
     int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    //binary search is alawys applied on sorted array

    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};

    int index=binarySearch(even,8,6);
    cout<<"The element 6 is found at : "<<index;
    //return 0;

}