#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int Carr[100]={0};
    for(long long int i=0;i<n;i++)
    cin>>arr[i];
    for(long long int i=0;i<n;i++)
    {
        Carr[arr[i]]++;
    }
    int count=0;
    for(int i=0;i<100;i++)
    {
        if(Carr[i]>0)
        count++;
    }
    cout<<count<<endl;

}