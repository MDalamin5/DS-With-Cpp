#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int array[5]={0};
    //vector<int>array;
    for(int i=0;i<n;i++)
    {
        array[a[i]]++;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}