#include<bits/stdc++.h>
using namespace std;
int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main()
{ /*
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<p<<endl; //address
    cout<<*p2<<endl;//address
    cout<<i<<endl; //value
    cout<<*p<<endl; //value
    cout<<**p2<<endl; //value

//address at p
cout<<&i<<endl;
cout<<p<<endl;
cout<<&p2<<endl; */
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
   
    return 0;
}