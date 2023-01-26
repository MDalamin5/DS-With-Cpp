#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int* y;
    y=&x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
    x=100;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
}