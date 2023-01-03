#include<bits/stdc++.h>
using namespace std;
int postfixEvaluate(string S)
{
    stack<int>s;
    for(int i=0;i<S.length();i++)
    {
        //to check if it is number then push it to stack
        //also convert string to int by subtracting 0 from it we get it to ascii value
        //s[i]-'0'---->it will give ans integer value
        if(S[i]>='0' && S[i]<='9')
        {
            s.push(S[i]-'0');//integer value
        }
        else{
            int op2=s.top();
             s.pop();
             int op1=s.top();
             s.pop();

             //for operators
             switch(S[i])
             {
                case '+':
                    s.push(op1+op2);
                    break;
                 case '-':
                    s.push(op1-op2);
                    break;
                 case '*':
                    s.push(op1*op2);
                    break;  
                 case '/':
                    s.push(op1/op2);
                    break; 
                    //if emponential s.push(pow(op1.op2))

                 default:
                    break;
             }
        }
    }
    return s.top();
}
int main()
{
    cout<<postfixEvaluate("231*+9-");
    return 0;
}