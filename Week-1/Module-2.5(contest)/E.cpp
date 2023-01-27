#include<bits/stdc++.h>
using namespace std;
void sortt(long long int arr[],long long int size);
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    sortt(arr,n-1);
    int missing;
    for(long long int i=0;i<n-1-1;i++)
    {
        if(arr[i]-arr[i+1]!=-1)
        {
            cout<<arr[i]+1;
            break;
        }
    }
}
void sortt(long long int arr[],long long int size)
{
    for(long long int i=0;i<size;i++)
    {
        for(long long int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                long long int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}