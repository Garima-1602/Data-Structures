#include<bits/stdc++.h>
using namespace std;
void countFreq(int arr[],int n)
{
    unordered_map<int,int>mp;
    //Traversing and counting the frequency of elements
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    //copyinh the vale of mp into x
    //Traversing and printing the frequencies of element
    for(auto x:mp)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }

}
int main()
{
    int n;
    cout<<"Enter size of an Array: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Frequency of the elements: "<<endl;
    countFreq(arr,n);
    return 0;

}