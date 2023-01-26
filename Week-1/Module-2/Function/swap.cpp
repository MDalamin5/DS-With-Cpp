#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swapp(int &a,int &b);
int main()
{
    int a,b;
    cin>>a>>b;
    swapp(a,b);
    cout<<"a: "<<a<<"b: "<<b<<endl;
}
void swapp(int &a,int &b)
{
    int temp=b;
    b=a;
    a=temp;
    cout<<"in fumction: a: "<<a<<" b: "<<b<<endl;
}
