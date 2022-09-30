#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Garima";
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];//to get single charcter
        s.push(ch);
    }
    string ans="";//empty string
    while(!s.empty()) //untill when stack becomes empty
    {
      char ch=s.top();
      ans.push_back(ch);
      s.pop();
    }
    cout<<"answer is: "<<ans<<endl;
    return 0;
}