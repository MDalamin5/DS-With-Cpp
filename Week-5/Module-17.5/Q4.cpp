#include<bits/stdc++.h>
using namespace std;
int summ=0;
int sum(int a[],int size);
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<sum(a,n);
}
int sum(int a[],int size)
{
    if(size==1)
    return a[0];
    return a[size-1]+sum(a,size-1);
}