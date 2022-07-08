#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4],int target,int row,int col)
{
    //traversing
   for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            if(arr[row][col] ==target)
            return 1;
        }
    }
    return 0;
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
    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"FOUND!";
    }
    else{
        cout<<"NOT FOUND!";
    }
    return 0;

}