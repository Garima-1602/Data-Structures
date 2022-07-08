#include<bits/stdc++.h>
using namespace std;
int printSum(int arr[][4],int row,int col)
{
    int maxi;
    for(int row=0; row<3; row++) {
        int sum=0;
        
        for(int col=0; col<4; col++) {
            sum+=arr[row][col];
            
        }
        cout<<sum<<" ";
         maxi=max(sum);
    }
   
    return maxi;

    
}
int main()
{
    int arr[3][4];
    //put according to rows and columns
    //int arr[3][4]={{1,11,111,111},{2,22,222,2222},{3,33,333,333}}
    
     cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }
    
    cout << "Printing the array " << endl;
    //print 
        for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout<<"sum"<<endl;
   printSum(arr,3,4);
    return 0;
}