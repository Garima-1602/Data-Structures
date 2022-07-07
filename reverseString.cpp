#include<bits/stdc++.h>
using namespace std;
void reverseString(char ch[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(ch[s++],ch[e--]);
    }

}
int getLength(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[20];
    cin>>ch;
    cout<<"Enter name "<<ch<<endl;

    int len=getLength(ch);
    cout<<"Length of string "<<len<<endl;
   reverseString(ch,len);
    cout<<"After reverse name is: "<<ch<<endl;
   

}