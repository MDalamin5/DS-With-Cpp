#include<bits/stdc++.h>
using namespace std;
int save[100];
int called=0;
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    if(save[n]!=0)
    return save[n];
    int x=fib(n-1);
    called++;
    int y=fib(n-2);
    called++;
    save[n]=x+y;
    return x+y;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<"\n";
    cout<<called<<endl;
}

/*
    time complexcity 2^n
    memory complexcity O(n)
*/

/*
if answer save then time complexcity
time complecity = O(n)
memory complxcity = O(n)
*/