#include<bits/stdc++.h>
using namespace std;
int main()
{
    //now to take different values of row and col 3*4
    int row;
    cin>>row;
    int col;
    cin>>col;

    int **arr=new int*[row];
    //creation
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    //taking input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }cout<<endl;
    //printing 
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}