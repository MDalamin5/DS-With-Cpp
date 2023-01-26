#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *x=new int[n];
    for(int i=0;i<n;i++)
    cin>>x[i];

    cout<<x<<endl;
    for(int i=0;i<n;i++)
    cout<<" "<<x[i];
    delete [] x;
}